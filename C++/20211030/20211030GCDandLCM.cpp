#include <iostream>
using namespace std;

int calculateGCD(int a, int b);
int calculateLCM(int a, int b);

int main(){
	int m, n;
	
	scanf("%d %d", &m, &n);
	
	int GCD, LCM;
	
	GCD = calculateGCD(m, n);
	LCM = calculateLCM(m, n);
	
	cout << GCD << " " << LCM;
	
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
