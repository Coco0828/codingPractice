#include <iostream>
using namespace std;

int main(){
	int n;
	
	while(cin >> n){
		(n % 2)?cout << n-1:cout << n;
		cout << endl;	
	}
	
	return 0;
}
