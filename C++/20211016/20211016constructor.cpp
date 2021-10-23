#include <iostream>
#include <string>
using namespace std;

class Person {
	private:
    	static const int LIMIT = 25;
        string lname;      //Person's last name
        char fname[LIMIT]; //Person's first name
        
	public:
		Person();//#1
		Person(const string & ln, const char* fn = "HeyYou!"){
			cout << fname << lname << fn;
		}//#2
		
    	//the following methods display lname and fname
    	void Show();//firstname lastname
		void FormalShow();//lastname, firstname
};

Person::Person(){
	lname = "";
	//fname[0] = "\0";
}
void Person::Show(){
	cout << fname << " " << lname << endl;
} 
void Person::FormalShow(){
	cout << lname << " " << fname << endl;
}

int main () {
    Person one;
    Person two("Hsu", "");
    Person three("Hung", "Gargar");
    
    /*one.Show();
    one.FormalShow();*/
    
    /*two.Show();
    two.FormalShow();*/
    
    three.Show();
    three.FormalShow();
    
    return 0;
}
