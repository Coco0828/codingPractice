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
	string input;
	int a, b, i;
	int answerA = 0, answerB = 0, answerC = 0, answerD = 0, answerE = 0, answerF = 0;
	
	cin >> input;
	
	while(input != "EOF"){
		if(input[0] == 'G' && input[1] == 'C' && input[2] == 'D'){
			a = input[4] - '0';
			b = input[6] - '0';
			answerA = calculateGCD(a, b);
		}
		if(input[0] == 'L' && input[1] == 'C' && input[2] == 'M'){
			a = input[4] - '0';
			b = input[6] - '0';
			answerB = calculateLCM(a, b);
		}
		if(input[0] == 'A' && input[1] == 'D' && input[2] == 'D'){
			a = input[4] - '0';
			b = input[6] - '0';
			answerC = calculateADD(a, b);
		}
		if(input[0] == 'S' && input[1] == 'U' && input[2] == 'B'){
			a = input[4] - '0';
			b = input[6] - '0';
			answerD = calculateSUB(a, b);
		}
		if(input[0] == 'M' && input[1] == 'U' && input[2] == 'L'){
			a = input[4] - '0';
			b = input[6] - '0';
			answerE = calculateMUL(a, b);
		}
		if(input[0] == 'D' && input[1] == 'I' && input[2] == 'V'){
			a = input[4] - '0';
			b = input[6] - '0';
			answerF = calculateDIV(a, b);
		}
		cin >> input;
	}
		
	
	cout << "gcd: " << answerA << endl;
	cout << "lcm: " << answerB << endl;
	cout << "add: " << answerC << endl;
	cout << "sub: " << answerD << endl;
	cout << "mul: " << answerE << endl;
	cout << "div: " << answerF << endl;
	
	return 0;
}

int calculateGCD(int a, int b){
	int i, min;
	
	for(i = a; i > 0; i --){
		if(a % i == 0 && b % i == 0){
			min = i;
			break;
		}
	}
	return min;
}
int calculateLCM(int a, int b){
	int i, min, max;
	
	for(i = a; i > 0; i --){
		if(a % i == 0 && b % i == 0){
			min = i;
			break;
		}
	}
	
	max = (a/min) * (b/min) * min;
	
	return max;
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
