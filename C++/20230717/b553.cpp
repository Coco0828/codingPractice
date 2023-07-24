#include <iostream>
using namespace std;

int collatz(int n){
	int a = 0;
	while(n != 1){
		if(n % 2 == 0){
			n /= 2;
			a ++;
		}
		else{
			n = (n*3) + 1;
			a ++;
		}	
	}
	return a;
}

int main(){
	int n;
	while(cin >> n){
		cout << collatz(n) << endl;
	}
	
	return 0;
}
