/*#include<iostream>
using namespace std;


class Coord{
    int x,y;
    public:
        Coord(){};
        Coord(int a, int b){x = a;y = b;};
        Coord add(Coord c){
            Coord temp;
            temp.x = x+c.x;
            temp.y = y+c.y;
            return temp;
        };
        void set(Coord c){
            x = c.x; y = c.y;
        };
        void print(){
            cout<<x<<y<<endl;
        }
};
int main(){
    Coord o1(10,10),o2(5,3),o3;
    //o3 = o1+o2;
    o3.set(o1.add(o2));
    o3.print();
    return 0;
}
*/ 

/*#include<iostream>
using namespace std;


class Coord{
    int x,y;
    public:
        Coord(){};
        Coord(int a, int b){x = a;y = b;};
        Coord operator+(Coord c){
            Coord temp;
            temp.x = x+c.x;
            temp.y = y+c.y;
            return temp;
        };
        void operator=(Coord c){
            x = c.x; y = c.y;
        };
        void print(){
            cout<<x<<y<<endl;
        }
};
int main(){
    Coord o1(10,10),o2(5,3),o3;
    //o3 = o1+o2;
    o3.operator=(o1.operator+(o2));
    o3.print();
    return 0;
}
*/ 

#include<iostream>
using namespace std;


class Coord{
    int x,y;
    public:
        Coord(){};
        Coord(int a, int b){x = a;y = b;};
        Coord operator+(Coord c);
        void operator=(Coord c);
        void print(){
            cout<<x<<y<<endl;
        }
};
Coord Coord::operator+(Coord c){
    Coord temp;
    temp.x = x+c.x;
    temp.y = y+c.y;
    return temp;
};
void Coord::operator=(Coord c){
    x = c.x; y = c.y;
};

int main(){
    Coord o1(10,10),o2(5,3),o3(3,2),o4,o5;
    //o3 = o1+o2;
    //o3 = o1.operator+(o2);
    //o3.operator=(o1.operator+(o2));
    //o3.operator=(o1.operator+(o2));
    //o3.print();
    
    o4 = o1.operator+(o2);
    o4 = o4.operator+(o3);
    o5.operator=(o4);
    
    o5.print();
    return 0;
}
