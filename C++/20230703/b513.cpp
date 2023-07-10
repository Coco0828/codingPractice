#include <iostream>
using namespace std;

int main(){
	int n, a;
	cin >> n;
	
	for(int i = 0; i < n; i ++){
		cin >> a;
		int k = 0;
		for(int i = 2; i <= a/2; i ++){
			if(a % i == 0) k = 1;
		}
		if(k == 0) cout << "Y";
		else cout << "N";
		cout << endl;
	} 
	
	return 0;
}
