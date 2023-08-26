#include <iostream>
using namespace std;

int main(){
	int n, ans;
	while(cin >> n && n != 0){
		ans = n*(n+1)*(2*n+1)/6;
		cout << ans << endl;
	}
	
	return 0;
}
