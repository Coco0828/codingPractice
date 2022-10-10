#include <iostream>
using namespace std;

int main(){
	int a, b, ans = 0;
	cin >> a >> b;
	
	for(int i = a; i <= b; i ++){
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) ans ++; 
	}
	
	cout << ans;
	
	return 0;
}
