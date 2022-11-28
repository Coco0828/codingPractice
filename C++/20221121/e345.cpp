#include <iostream>
using namespace std;

int main(){
	int n;
	
	while(cin >> n){
		(n % 9 == 0 && n > 0)? cout << 9: cout << n % 9;
		cout << endl;
	}
	
	return 0;
}
