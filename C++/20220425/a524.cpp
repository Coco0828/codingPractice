#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n, i;
	int password[10000];
	
	while(cin >> n){
		for(i = 0; i < n; i ++){
			password[i] = n - i;
		}
		do{
			for(i = 0; i < n ; i ++){
				cout << password[i];
			}
			cout << endl;
		} while(prev_permutation(password, password + n));
	}
	
	
	return 0;
}
