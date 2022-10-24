#include <iostream>
using namespace std;

int main(){
	int j, l, ans;
	
	while(cin >> j >> l){
		if(j == 0){
			ans = 0;
		}
		else if(j == 1){
			if(l >= 10){
				ans = 1 + (l-10) * 3;
				if(l >= 30) ans ++;
				if(l >= 70) ans ++;
				if(l >= 120) ans += 3;
			} else{
				ans = 0;
			}
		}
		else if(j == 2){
			if(l >= 8){
				ans = 1 + (l-8) * 3;
				if(l >= 30) ans ++;
				if(l >= 70) ans ++;
				if(l >= 120) ans += 3;
			} else{
				ans = 0;
			}
		}
		else if(j == 3){
			if(l >= 10){
				ans = 1 + (l-10) * 3;
				if(l >= 30) ans ++;
				if(l >= 70) ans ++;
				if(l >= 120) ans += 3;
			} else{
				ans = 0;
			}
		}
		else if(j == 4){
			if(l >= 10){
				ans = 1 + (l-10) * 3;
				if(l >= 30) ans ++;
				if(l >= 70) ans ++;
				if(l >= 120) ans += 3;
			} else{
				ans = 0;
			}
		}
		cout << ans << endl;
	}
	
	
	return 0;
}
