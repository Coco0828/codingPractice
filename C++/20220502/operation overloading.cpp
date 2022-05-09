#include <iostream>
using namespace std;

class Cord{
    int x;
    int y;
    public:
    Cord(){};
    Cord(int a,int b){
        x = a;
        y = b;
    }
    Cord operator+(Cord c){
        Cord temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }
    Cord operator++(int){// c1++
        Cord temp = *this;
        x++;
        y++;
        return temp;
    }
	Cord& operator++(){// ++c1
        x++;
        y++;
        return *this;
    }
    bool operator==(Cord &c){
    	return (this->x == c.x && this->y == c.y);
	}
    
    void operator=(Cord c){
        x = c.x;
        y = c.y;
    }
    void show(){
        cout << "x = " << x;
        cout << "y = " << y << endl;
    }
};


int main(){
    Cord c1(1,1);
	/*Cord c2(4,6);
	Cord c3;
	c3 = c1+c2;
    //c3.operator=(c1.operator+(c2)) ;
    c3.show();*/
    
    //Cord c1(1,2),c2(1,2),c3(3,4);
    Cord c4;
    c4 = c1++;
    c1.show();
    c4.show();
    c4 = c1++;
    c1.show();
    c4.show();
    
    //c4.set(c1.add(c2.add(c3)))
    
    /*if(c1 == c2)cout <<"c1 == c2";
    else cout << "c1 != c2";*/
    
    // x = 7
    // y = 11
    return 0;
}

