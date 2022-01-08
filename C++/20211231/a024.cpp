#include <iostream>
using namespace std;

int calculateGCD(int a, int b);

int main(){
	int m, n;
	
	scanf("%d %d", &m, &n);
	
	int GCD;
	
	GCD = calculateGCD(m, n);
	
	cout << GCD;
	
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
