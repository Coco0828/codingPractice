#include <iostream>
#include <cstring>
using namespace std;

class Animal{
	public:
		string name;
		void eat(){
			cout << name << "會吃東西." << endl;
		};
		void setName(string n){
			name = n;
		}
};
class Bird:public Animal{
	public:
		void fly(){
			cout << name << "會飛." << endl;
		};
};
class Penguin:public Bird{
	public:
		fly(){
			cout << name << "不會飛..哭哭!!" << endl;
		};
		void swim(){
			cout << name << "會游泳." << endl;
		};
};
class JayChou:public Animal{
	public:
		void speak(){
			cout << name << ": 我就是屌!!" << endl;
		};
};

int main() {
   Animal a;
   Bird b;
   Penguin p;
   JayChou j;
   
   a.setName("動物");
   a.eat();
   cout<< endl;
   
   b.setName("鳥");
   b.eat();
   b.fly();
   cout << endl;
   
   p.setName("企鵝");
   p.eat();
   p.fly();
   p.swim();
   cout<<endl;
   
   j.setName("周董");
   j.eat();
   j.speak();
   cout<<endl;
   cout<<"fly() override!!"<<endl;

   return 0;
}
