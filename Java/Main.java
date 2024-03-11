/*public class Main {

    public static String insert(String str1, String str2, int pos){
        String first, last;
        first = str1.substring(0, pos);
        last = str1.substring(pos+1,str1.length()+1);
        return first + str2 + last;
    }
    public static void main(String[] args) {
        String str1 = "xy", str2 = "cat";
        System.out.println(insert(str1, str2, 0));
        System.out.println(insert(str1, str2, 1));
        System.out.println(insert(str1, str2, 2));
  }
}
*/

/*
 a001

import java.util.Scanner;
 
public class Main{
 public static void main(String[] args){
  Scanner scanner = new Scanner(System.in);
  while(scanner.hasNext()){
   System.out.printf("hello, "+scanner.next());
  }
 }
}

*/
/*
 a002
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        System.out.println(a+b);
        scanner.close();
    }

} 
*/

/*a003

import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int d = scanner.nextInt();
        int s = (m*2+d)%3;
        switch(s){
            case 0:
                System.out.println("普通");
                break;
            case 1:
                System.out.println("吉");
                break;
            case 2:
                System.out.println("大吉");
                break;
        }
    }

}
*/
/*a005
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while(t > 0){
            int firstNum = scanner.nextInt();
            int secondNum = scanner.nextInt();
            int thirdNum = scanner.nextInt();
            int fourthNum = scanner.nextInt();
            int ans;
            
            if(secondNum - firstNum == thirdNum - secondNum){
                ans = fourthNum + (secondNum - firstNum);
            }else{
                ans = fourthNum * (secondNum / firstNum);
            }

            System.out.println(firstNum + " " + secondNum + " " + thirdNum + " " + fourthNum + " " + ans);

            t--;
        }

    }


}*/

/*
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        while(scanner.hasNext()){
            int a = scanner.nextInt();

            if(a%4==0 && a%100!=0){
                System.out.println("閏年");
             }else if(a%400 == 0){
                System.out.println("閏年");
            }else{
                System.out.println("平年");
            }

        }
        

        scanner.close();
    }
}
*/

/*import java.util.Scanner;
import java.lang.Math;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (scanner.hasNext()) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            double r = Math.pow(b, 2) - 4 * a * c;

            if(r < 0) {
                System.out.println("No real root");
            }
            else if(r == 0) {
                double x = 0.5 * -b / a;
                System.out.println("Two same roots x=" + (int)x);
            }
            else {
                double k = Math.sqrt(r);
                double x1 = 0.5 * (-b + k) / a;
                double x2 = x1 - k;
                System.out.println("Two different roots x1="+ (int)x1 
                        +" , x2=" + (int)x2);
            }
        }
        scanner.close();
    }
}*/
/*
public class Main{
    public static void main(String[] args) {
        int x = 10, y = 0;
        while(x>5){
            y = 3;
            while(y<x){
                y*=2;
                if(y%x==1){
                    y+=x;
                }
            }
            x-=3;

        }
        System.out.println(x+" "+y);
    }

}*/

public class Main{
    public static void main(String[] args) {
        int n = 6144;
        int d1,d2,d3,checkDigit,nRemaining,rem;
        checkDigit = n%10;
        nRemaining = n/10;
        d3 = nRemaining % 10;
        nRemaining /= 10;
        d2 = nRemaining % 10;
        nRemaining /= 10;
        d1 = nRemaining % 10;
        rem = (d1+d2+d3)%7;

        System.out.println(rem==checkDigit);
    }

    
    
}
