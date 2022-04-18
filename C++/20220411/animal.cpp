#include <iostream>
using namespace std;

class animal{
	int age;
	string category;
	public:
		void show();
		animal(){
			age = 15;
			category = "Cat";
		}
		animal(int n, string cate = "Cat"){
			age = n;
			category = cate;
		}
		
};

void animal::show(){
	cout << "age " << age << " category " << category << endl;
	
}

int main(){
	
	animal a(16);
	animal b(18, "Dog");
	
	a.show();
	b.show();
	
	return 0;
}
