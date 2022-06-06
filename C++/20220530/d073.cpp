#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	(n % 3 == 0)? cout << n / 3: cout << n / 3 + 1;
	
	return 0;
}
