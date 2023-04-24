#include <iostream>
#include <string> 
using namespace std;

int password(string input){
	int a = 0, j = 0, k = 0;
	
	if(input.length() >= 8) a ++;
	for(int i = 0; i < input.length(); i ++){
		if(input[i] >= 65 && input[i] <= 90) j ++;
		if(input[i] >= 97 && input[i] <= 122) k ++;
	}
	if(k > 0 && j > 0) a ++;
	int m = 0;
	for(int i = 0; i < input.length(); i ++){
		if(input[i] >= 33 && input[i] <= 64) m = 8;
	}
	if(m == 8 && (j > 0 || k > 0)) a ++;
	
	return a;
}

int main(){
	string input;
	
	while(getline(cin, input)){
		int b = password(input);
		cout << "This password is ";
		if(b == 0) cout << "WEAK";
		else if(b == 1) cout << "ACCEPTABLE";
		else if(b == 2) cout << "GOOD";
		else if(b == 3) cout << "STRONG";
		cout << endl; 
	}

	
	return 0;
}
