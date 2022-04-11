#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int input;
	int k0 = 0, k1 = 0, k2 = 0;
	
	while(n){
		cin >> input;
		
		if(input % 3 == 0) k0 ++;
		else if(input % 3 == 1) k1 ++;
		else k2 ++;
		
		n--;
	}
	
	cout << k0 << " " << k1 << " " << k2;
	
	return 0;
} 
