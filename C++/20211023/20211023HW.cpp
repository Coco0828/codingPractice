#include <iostream>
#include <cstring>
using namespace std;

class Animal{
	public:
		string name;
		void eat(){
			cout << name << "�|�Y�F��." << endl;
		};
		void setName(string n){
			name = n;
		}
};
class Bird:public Animal{
	public:
		void fly(){
			cout << name << "�|��." << endl;
		};
};
class Penguin:public Bird{
	public:
		fly(){
			cout << name << "���|��..����!!" << endl;
		};
		void swim(){
			cout << name << "�|��a." << endl;
		};
};
class JayChou:public Animal{
	public:
		void speak(){
			cout << name << ": �ڴN�O�x!!" << endl;
		};
};

int main() {
   Animal a;
   Bird b;
   Penguin p;
   JayChou j;
   
   a.setName("�ʪ�");
   a.eat();
   cout<< endl;
   
   b.setName("��");
   b.eat();
   b.fly();
   cout << endl;
   
   p.setName("���Z");
   p.eat();
   p.fly();
   p.swim();
   cout<<endl;
   
   j.setName("�P��");
   j.eat();
   j.speak();
   cout<<endl;
   cout<<"fly() override!!"<<endl;

   return 0;
}
