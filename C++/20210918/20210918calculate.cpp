#include <iostream>
#include <string.h>
using namespace std;

int calculateGCD(int a, int b);
int calculateLCM(int a, int b);
int calculateADD(int a, int b);
int calculateSUB(int a, int b);
int calculateMUL(int a, int b);
int calculateDIV(int a, int b);

int main(){
	char input[8];
	int a, b, i;
	int answer;
	char word[4] = "EOF";
	
	do{
		for(i = 0; i < 10; i ++){
			cin >> input[i];
		}
		
		if(input[0] == "G" && input[1] == "C" && input[2] == "D"){
			a = input[5] - "0";
			b = input[7] - "0";
			answer = calculateGCD(a, b);
			cout << answer << endl;
		}
		if(input[0] == "L" && input[1] == "C" && input[2] == "M"){
			a = input[5] - "0";
			b = input[7] - "0";
			answer = calculateLCM(a, b);
			cout << answer << endl;
		}
		if(input[0] == "A" && input[1] == "D" && input[2] == "D"){
			a = input[5] - "0";
			b = input[7] - "0";
			answer = calculateADD(a, b);
			cout << answer << endl;
		}
		if(input[0] == "S" && input[1] == "U" && input[2] == "B"){
			a = input[5] - "0";
			b = input[7] - "0";
			answer = calculateSUB(a, b);
			cout << answer << endl;
		}
		if(input[0] == "M" && input[1] == "U" && input[2] == "L"){
			a = input[5] - "0";
			b = input[7] - "0";
			answer = calculateMUL(a, b);
			cout << answer << endl;
		}
		if(input[0] == "D" && input[1] == "I" && input[2] == "V"){
			a = input[5] - "0";
			b = input[7] - "0";
			answer = calculateDIV(a, b);
			cout << answer << endl;
		}
		
	}while(strcmp(input, word))
	
	
	return 0;
}

int calculateGCD(int a, int b){
	
}
int calculateLCM(int a, int b){
	
}
int calculateADD(int a, int b){
	return a+b;
}
int calculateSUB(int a, int b){
	return a-b;
}
int calculateMUL(int a, int b){
	return a*b;
}
int calculateDIV(int a, int b){
	return a/b;
}
