#include <iostream>
using namespace std;

int main(){
	string name;
	getline(cin, name);
	cout << int(name[0]);
	for (int i = 1; i < name.size(); i++){
		cout << "_" << int(name[i]);
	}
	return 0;
} 
