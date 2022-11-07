#include <iostream>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		(n % 3)? cout << "NO":cout << "YES";
		cout << endl;
	}
	
	return 0;
}
