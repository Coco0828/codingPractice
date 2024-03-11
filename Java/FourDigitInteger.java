public class FourDigitInteger {
    private int value;
    
    public FourDigitInteger(int aValue){
        value = aValue;
    }

    public boolean isOdd(){
        if(value % 2 == 0){
            return false;
        }else{
            return true;
        }
    }

    public boolean isPalindrome(){
        int a = value/1000;
        int b = (value%1000)/100;
        int c = (value%100)/10;
        int d = value%10;
        if (a == d && b==c) {
            return true;
        }else{
            return false;
        }
    }

    public boolean isPerfectSquare(){
        for(int i = 32;i < 100;i++){
            if(i*i==value){
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        FourDigitInteger a = new FourDigitInteger(2500);
        System.out.println(a.isOdd());
        System.out.println(a.isPalindrome());
        System.out.println(a.isPerfectSquare());
    }
}

