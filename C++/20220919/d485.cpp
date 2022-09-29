#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
		
	if((a % 2 == 0) && (b % 2 == 0)) cout << (b - a + 2) / 2;
	else if((b - a) % 2) cout << (b - a + 1) / 2;
	else cout << (b - a) / 2;
	
	return 0;
}
