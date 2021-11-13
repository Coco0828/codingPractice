/*class base{
    int x;
    public:
        setx(int n){x = n;}
};

class derived: public base{
    int y;
    public:
        setx(int n){base::setx(3*n);}
        sety(int n){y = n;}
};


int main(){
    base b;
    derived d;
    b = d;
    b.setx(5);
    b.sety(10);
    
    d = b;
    d.setx(5);
    d.sety(8);
    return 0;
}*/

#include <iostream>
using namespace std;

/*class car{
	public:
	    virtual void move(){cout<< "car move" << endl;}
};
class Benz:public car{
	public:
	    void move(){cout << "Benz move" << endl;}
};
class Volvo:public car{
	public:
	    void move(){cout << "Volvo move";}
};

void demo(void *p,int type){
        switch(type){
                case 1:((Benz *)p)->move();break;
                case 2:((Volvo *)p)->move();break;
                
        }
}

int main(){
    Benz b;
    Volvo v;
    demo(&b, 1);
    demo(&v, 2);
    return 0;
}*/

class carcar{
	public:							//使用純粹虛擬函數完成此類別
		virtual void move(){cout<<"carcar move"<<endl;} 
};

class car :public carcar{                //使用虛擬函數完成此類別
	public:
		virtual void move(){cout<<"car move" <<endl;}
} ;
class Benz: public car {                         //完成此類別
	public:
		void move(){cout << "Benz move"<<endl;}
} ;
class Volvo: public car {                        //完成此類別
    void move(){cout << "Volvo move"<< endl;}
} ;

void demo(car c){
	c.move();
}
void demo(car *c){   //完成此函數
	c->move();
}

//以下請勿更動
int main(){
	car c;
	Benz b ;
	Volvo v; 
	cout << "傳入變數"<<endl;
	demo(c);
	demo(b);
	demo(v);

   cout << "傳入指標"<<endl;
	demo(&c);
	demo(&b);
	demo(&v);

   system("pause");
   return 0;
}

