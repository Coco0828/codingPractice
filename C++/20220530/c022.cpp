#include <iostream>
using namespace std;

int main(){
	int T;
	cin >> T;
	int k = 1;
	
	while(k <= T){
		int a, b, i, sum = 0;
		cin >> a;
		cin >> b;
		
		for(i = a; i <= b; i ++){
			if(i % 2 != 0) sum += i;
		}
		
		cout << "Case " << k << ": " << sum << endl;
		
		k ++;
	}
	
	return 0;
}
