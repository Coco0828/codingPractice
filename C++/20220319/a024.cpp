#include <iostream>
using namespace std;

int main(){
	long long int a, b, i, ans;
	
	while(cin >> a >> b){
		if(a && b){
			if(a >= b){
				for(i = 1; i <= b; i ++){
					if(a % i == 0 && b % i == 0) ans = i;
				}
			} else{
				for(i = 1; i <= a; i ++){
					if(a % i == 0 && b % i == 0) ans = i;
				}
			}
			cout << ans << endl;
		}
	}
	
	return 0;
}
