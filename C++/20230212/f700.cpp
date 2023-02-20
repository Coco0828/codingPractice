#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	getline(cin, input);
	cout << input << endl;
	
	for(int i = 0; i < input.length(); i ++) cout << "~";
	
	return 0;
}
