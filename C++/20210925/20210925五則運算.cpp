#include <iostream>
#include <string.h>
using namespace std;

int calculateADD(int a, int b);
int calculateSUB(int a, int b);
int calculateMUL(int a, int b);
int calculateDIV(int a, int b);
int calculateREM(int a, int b);

int main(){
	string input;
	int i;
	int number[10];
	int answer = 0;
	
    cin >> input;
    
    for(i = 0; i < 10; i ++){
        if(input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/' && input[i] != '%' && input[i] != '(' && input[i] != ')'){
			number[i] = input[i] - '0';
		}
    }
    
    for(i = 0; i < 10; i ++){
    	if(input[i] == '(' && input[i+4] == ')'){
    		if(input[i+2] == '+')answer += calculateADD(number[i+1], number[i+3]);
    		if(input[i+2] == '-')answer += calculateSUB(number[i+1], number[i+3]);
    		if(input[i+2] == '*')answer += calculateMUL(number[i+1], number[i+3]);
    		if(input[i+2] == '/')answer += calculateDIV(number[i+1], number[i+3]);
    		if(input[i+2] == '%')answer += calculateREM(number[i+1], number[i+3]);
		}
	}
	
	for(i = 1; i < 10; i ++){
		if(input[i] == '+' && input[i-2] != '(')answer += calculateADD(number[i-1], number[i+1]);
    	if(input[i] == '-' && input[i-2] != '(')answer += calculateSUB(number[i-1], number[i+1]);
		if(input[i] == '*' && input[i-2] != '(')answer += calculateMUL(number[i-1], number[i+1]);
    	if(input[i] == '/' && input[i-2] != '(')answer += calculateDIV(number[i-1], number[i+1]);
    	if(input[i] == '%' && input[i-2] != '(')answer += calculateREM(number[i-1], number[i+1]);
	}
	
	cout << answer;
	
	return 0;
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
int calculateREM(int a, int b){
	return a%b;
}
