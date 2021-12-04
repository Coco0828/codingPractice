#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	int i;
	
	cin >> input;
	
	for(i = 0; i < input.length(); i ++){
		input[i] -= 7;
	}
	
	cout << input;
	
	return 0;
}
