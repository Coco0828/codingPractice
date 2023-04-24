#include <iostream>
using namespace std;

int es(int n){
    int ans = 1;
	for(int i = 1; i <= n; i ++)
	    ans *= i;
	return ans;
}
int main(){
	int n, m;
	while (cin >> n >> m)
    	cout << es(n) / (es(n-m)*es(m)) << endl;
}

