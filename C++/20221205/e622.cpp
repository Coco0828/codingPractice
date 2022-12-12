#include <iostream>
using namespace std;

int main(){
	int n, s, max = 0, ans;
	cin >> n >> s;
	int t = n;
	
	while(n){
		int cp, iv;
		cin >> cp >> iv;
		
		int cpP;
		if(iv < 30) cpP = 10; 
		else if(iv < 40) cpP = 50;
		else if(iv < 46) cpP = 100;
		
		int sum = cp + ((s / 1000) * cpP);
		
		if(sum > max){
			max = sum;
			ans = t - n + 1;
		}
		
		n --;
	}
	
	cout << ans << " " << max << endl;
	
	return 0;
}
