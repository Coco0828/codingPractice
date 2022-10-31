#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	if(n < 12) cout << n * 5;
	else cout << 50 * (n / 12) + 5 * (n % 12);
	
	return 0;
}
