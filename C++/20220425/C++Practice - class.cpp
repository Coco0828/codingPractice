#include <iostream>    
using namespace std;    
/*class Cal {    
    public:    
    	void show(string a, int b){
    		cout << a << " " << b << endl;
		}
		void show(string a){
			cout << a << endl;
		}
		void show(int b){
			cout << b << endl;
		}
};     
int main(void) {    
    Cal C;                                                    
    C.show("Hi",16);
    C.show("Hiee");
    C.show(16.2);
    C.show("199L",160000000);
   return 0;    
}   */

/*int main(){
	int a[2] = {1, 1};
	int b[2] = {2, 2};
	
	int c = a + b;
	
	cout << c;
	
	return 0;
}*/

class Coord{
    int x,y;  
    public:
    Coord(){};
    Coord(int a,int b){x = a;y = b;}
    Coord operator+(Coord c){
        // 你完成的地方
        Coord temp;
        temp.x = x + c.x;  //(o1.x) + (o2.x)
        temp.y = y + c.y;  //(o1.y) + (o2.y)
        return temp;
    }
    void operator=(Coord c){
        // 你完成的地方
        x = c.x;
        y = c.y;
    }
    void show(){cout << "x = " << x << " y = " <<y;}
};

int main(){
    Coord o1(3,5);  // x = 3,y = 5
    Coord o2(2,5);  // x = 2,y = 5
    Coord o3;
    //o3 = o1+o2;
    o3.operator=(o1.operator+(o2));
    //o3.set(o1.add(o2));
    o3.show();
    // x = 5 y = 10
    return 0;
}
