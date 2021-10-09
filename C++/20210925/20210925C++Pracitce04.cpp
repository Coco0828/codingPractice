#include <iostream>
using namespace std;

/*int main(){
    __int64 a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        cout<<a+b<<endl;
    }
    
    
    return 0;
}*/

/*class Carrots{
    int num;
    public: 
        Carrots();// default constructor
        void show();
};

Carrots::Carrots(){num = 10;}
void Carrots::show(){cout<<num<<endl;}

int main(){
    Carrots ob;
    ob.show();
    return 0;
}*/

class myclass{
    int a;
    public:
        myclass(){a=10;}
        myclass(int x){a = x;}
        myclass(const myclass & ob){a = ob.a;}
        ~myclass(){cout<<"delete object"<<endl;}
        void show(){cout<<a << endl;}
};
int main(){
    myclass ob1; 
    myclass ob2(2); 
    myclass ob3(ob1); 
    ob1.show();
    ob2.show();
    ob3.show();
    return 0;
}
