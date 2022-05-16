#include <iostream>
#include <string>
using namespace std;

class Person {
	private:
        static const int LIMIT = 25;
        string lname;      //Person's last name
        char fname[LIMIT]; //Person's first name
	public:
       Person() {lname=""; fname[0]='\0';}  //#1
       Person(const string & ln, const char * fn = "HeyYou!"){
			cout << lname << " " << fn << endl;
			cout << fn << " " << lname << endl;
	   } //#2
       //the following methods display lname and fname
       void Show() const {
			cout << fname << " " << lname << endl;
		}   // firstname lastname
       void FormalShow() const {
	   		cout << lname << " " << fname << endl;
		}   //lastname, firstname
		
};

int main () {
    Person one;
    Person two("Hsu");
    Person three("Hung","Gargar");
    
	three.FormalShow();
	three.Show();
    
    return 0;
}

