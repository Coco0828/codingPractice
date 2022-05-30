#include <iostream>
using namespace std;

int f(int k){
	if(k == 1) return 1;
	if(k % 2 == 0){
		return 1 + f(k / 2);
	} else{
		return 1 / f(k - 1);	
	}
}

int main(){	
	int a, b;
	
	while(cin >> a >> b){
		cout << f(a/b) << endl;
	}
	
	return 0;
}
