#include <iostream>
using namespace std;

int f(int a){
	if(a == 1) return 1;
	else return a + f(a-1);
}
long long int g(int a){
	if(a == 1) return 1;
	else return g(a-1) + f(a);
}

int main(){
	int n;
	
	while(cin >> n){
		cout << f(n) << " " << g(n) << endl;
	}
	
	
	return 0;
}
