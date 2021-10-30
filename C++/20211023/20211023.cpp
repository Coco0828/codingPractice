#include <iostream>
#include <math.h>
using namespace std;

/*class base{
    protected:
        int a,b;
    public: 
        void setab(int n, int m){a=n;b=m;}
};
class derived:public base{
    int c;
    public:
        void set(int n){c = n;}
        void show(){cout << a << "" << b<< "" << c << endl;}
};

int main(){
    base x;
    derived y;
    y.setab(1,2);
    y.set(3);
    y.show();
}*/

/*class OneDim{
	protected:
	    double x;
    public:
        void setx(int a){x = a;}
        double getx(){return x;}
};*/
/*
(1,2)  (5,6)
((x1-x2)^2 + ((y1-y2)^2)^0.5
pow(x1-x2,2) = (x1-x2)^2;
pow(y1-y2,2) = (y1-y2)^2;

sqrt(x) = x^0.5
*/
/*class TwoDim:public OneDim{
    double y;
    double distance(TwoDim& pt){
        return sqrt(pow(getx()-pt.getx(),2)+pow(y-pt.y,2));
    }
};

int main(){
    TwoDim a;
    a.x=1.21;
    a.y=2.412; 
    TwoDim b;
    b.x=3.0;
    b.y=5.5; 
    
    cout<<a.distantce(b);
}*/

/*class base{
    protected:
		int a,b;
    public: 
        void setab(int n, int m){a=n;b=m;}
};
class derived:public base{
    int c;
    public:
        void set(int n){c = n;}
        void show(){cout << a << "" << b<< "" <<c<<endl;}
};

int main(){
    base x;
    derived y;
    y.setab(1,2);
    y.set(3);
    y.show();
}
*/

class TwoDim{
    int x,y;
    public:
        void setxy(int a,int b){x = a;y = b;}
        void show(){cout<<x<<" "<<y;};
};
class ThreeDim : public TwoDim{
    int z;
    public:
        void show(){
            TwoDim::show();
            cout<< " " << z << endl;
        }
        void setxyz(int a, int b, int c){
        	setxy(a, b);
        	z = c;
		}
};

int main(){
    ThreeDim point3D;
    point3D.setxyz(1,2,4);
    point3D.show();
    system("pause");
    return 0;
}
