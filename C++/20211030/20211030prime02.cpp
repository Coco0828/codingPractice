#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	int i, j;
	int k = 0;
	
	for(i = 1; i <= n; i ++){
		if(n % i == 0){
			for(j = 1; j <= i; j ++){
				if(i % j == 0) k += 1;
			}
			if(k == 2) cout << i << " ";
		}
		k = 0;
	}
	
	
	return 0;
}
