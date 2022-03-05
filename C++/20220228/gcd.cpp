#include <iostream>
using namespace std;

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

int main(){
	int a, b, ans;
	scanf("%d %d", &a, &b);
	ans = calculateGCD(a, b);
	cout << ans;
	
	return 0;
}
