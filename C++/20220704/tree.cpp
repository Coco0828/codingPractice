#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int ans = 1;
	
	while(n){
		ans *= 2;
		n --;
	}
	
	cout << ans - 1;
	
	return 0;
}
