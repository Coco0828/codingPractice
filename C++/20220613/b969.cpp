#include <iostream>
#include <sstream>
using namespace std;

int main(){
	string a, b, name;

	getline(cin, a);
	getline(cin, b);

	stringstream ss(a);

	while (ss >> name){
		cout << b <<", "<< name <<endl;
	}

	return 0;
}
