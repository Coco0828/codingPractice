#include <iostream>
using namespace std;

int gcd(int a, int b){
	int ans;
	for(int i = 1; i <= a; i ++){
		if(a % i == 0 && b % i == 0){
			ans = i;
		}
	}
	
	return ans;
}

int main(){
	int n;
	while(cin >> n){
		int p[10000];
		for(int i = 0; i < n; i ++) cin >> p[i];
		int g = gcd(p[0], p[1]);
		for(int i = 2; i < n; i ++){
			g = gcd(g, p[i]);
		}
		
		cout << g << endl;
	}
	
	return 0;
}
