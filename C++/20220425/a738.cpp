#include <iostream>
using namespace std;

int d(int a, int b){
	if(b == 0) return a;
	return d(b, a % b);
}

int main(){
	int a, b;
	
	while(cin >> a >> b){		
		cout << d(a, b) << endl;
	}
	
	
	
	return 0;
}
