#include <iostream>
#include <string>
using namespace std;

int main(){
	string input;
	cin >> input;
	
	int i;
	int k = 0;
	
	for(i = 0; i < input.length() / 2; i ++){
		if(input[i] == input[input.length() - 1 - i]) k ++;
	}
	
	if(k >= input.length()/2) cout << "yes" << endl;
	else cout << "no" << endl;
	
	return 0;
}
