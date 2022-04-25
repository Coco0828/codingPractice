#include <iostream>
using namespace std;

/*class OneDim{
    int x;
public: 
    
    void setX(int n){x = n;}
    void getX(){cout<< x << endl;}
};

class TwoDim:public OneDim{
    int y;
public:
    
    void setY(int n){y = n;}
    void getY(){cout << y << endl;}
};

int main(){
    TwoDim td;
    td.setX(5);
    td.setY(10);
    td.x = 10;
	td.y = 20;
    td.getX();
    td.getY();
    
    return 0;
}*/

/*class TwoDim{
    int x,y;
    protected:
    	void set(int a,int b){x = a;y = b;}
public: 
    
    void show(){cout<< x << y << endl;}
};

class ThreeDim:private TwoDim{
    int z;
public:
    void set(int a,int b,int c){TwoDim::set(a,b); z = c;}
    void show(){TwoDim::show();cout << z << endl;}
};

int main(){
    ThreeDim td;
    
    td.set(1,2,3);
    
    td.show();
    
    return 0;
}*/

class A{
	private:
	//	int a3 = 3;
	protected:
		//int a2;
	public:
		int a1;
};
class B:protected A{
	public:
		void show(){
			cout << a1 << endl;
			//cout << a2 << endl;
		//	cout << a3 << endl; 
		}
};

int main(){
	B item;
	
	item.a1 = 5 ;
	//item.a2 = 5
	//item.a3 = 5
	
	item.show();
	
	return 0;
}
