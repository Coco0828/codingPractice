#include <iostream>
using namespace std;

int main(){
	int t = 5;
	int a, b, c;
	int ans = 0;
	
	while(t){
		cin >> a >> b >> c;
		if((a + b) > c && (c + b) > a && (a + c) > b) ans ++;
		
		t --;
	}
	
	cout << ans << endl;
	
	return 0;
}
