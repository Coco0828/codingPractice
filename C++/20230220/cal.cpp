#include <iostream>
using namespace std;

int cal(int n){
	if(n == 1) return 1;
	else return n * cal(n-1);
}

int main(){
	int n, ans = 1;
	cin >> n;
	
	//for(int i = n; i > 0; i --) ans *= i;
	
	cout << cal(n);
	
	return 0;
}
