#include <iostream>
using namespace std;

int main(){
	int n, a;
	cin >> n;
	int max = 0;
	
	while(n){
		cin >> a;
		if(a > max) max = a;
		n --;
	}
	cout << max;
	
	return 0;
}
