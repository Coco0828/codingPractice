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
	public:							//�ϥίº������Ƨ��������O
		virtual void move(){cout<<"carcar move"<<endl;} 
};

class car :public carcar{                //�ϥε�����Ƨ��������O
	public:
		virtual void move(){cout<<"car move" <<endl;}
} ;
class Benz: public car {                         //���������O
	public:
		void move(){cout << "Benz move"<<endl;}
} ;
class Volvo: public car {                        //���������O
    void move(){cout << "Volvo move"<< endl;}
} ;

void demo(car c){
	c.move();
}
void demo(car *c){   //���������
	c->move();
}

//�H�U�Фŧ��
int main(){
	car c;
	Benz b ;
	Volvo v; 
	cout << "�ǤJ�ܼ�"<<endl;
	demo(c);
	demo(b);
	demo(v);

   cout << "�ǤJ����"<<endl;
	demo(&c);
	demo(&b);
	demo(&v);

   system("pause");
   return 0;
}

