#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	while(n % 2 == 0){
		n /= 2;
	}
	while(n % 3 == 0){
		n /= 3;
	}
	while(n % 5 == 0){
		n /= 5;
	}
	
	cout << n%7;
	int k = 0;
	for(int i = 6; i < n; i ++){
		if(n % i == 0){
			k ++;
		}
	}
	cout << k;
	
	(k != 0)? cout << "beautiful":cout << "ugly";
	
	return 0;
}
