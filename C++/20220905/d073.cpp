#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	if(n % 3){
		cout << n / 3 + 1;
	} else{
		cout << n / 3;
	}
	
	return 0;
}