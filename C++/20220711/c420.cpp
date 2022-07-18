#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int a = n * 2 - 1;
	
	for(int i = 1; i <= n * 2; i += 2){
		for(int j = 1; j <= (a - i) / 2; j ++){
			cout << "_";
		}
		for(int j = 1; j <= i; j ++){
			cout << "*";
		}
		for(int j = 1; j <= (a - i) / 2; j ++){
			cout << "_";
		}
		cout << endl;
	}
	
	return 0;
}
