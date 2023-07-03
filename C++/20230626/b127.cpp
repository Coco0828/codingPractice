#include <iostream>
using namespace std;

int f(int n){
	if(n == 1) return 1;
	else if(n == 2) return 1;
	else return f(n-2) + f(n-1);
}

int main(){
	int n;
	while(cin >> n){
		cout << f(n) << endl;
	}
	
	return 0;
}
