#include <iostream>
using namespace std;

int array(int n){
	if(n == 1) return 1;
	return ((n-1) + array(n-1));
}

int main(){
	int n;
	
	while(cin >> n){
		cout << array(n) << endl;
	}	
	
	return 0;
}
