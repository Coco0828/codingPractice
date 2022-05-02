#include <iostream>
using namespace std;

int main(){
	int n, m, l, r, i, sum;
	
	while(cin >> n >> m){
		int a[100000];
		
		for(i = 0; i < n; i ++) cin >> a[i];
	
		while(m){
			cin >> l >> r;
			
			sum = 0;
		
			for(i = l-1; i < r; i ++)sum += a[i]; 
		
			cout << sum << endl;
			
			m --;
		}
	}
	
	
	
	return 0;
}
