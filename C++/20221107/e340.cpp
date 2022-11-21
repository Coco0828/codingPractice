#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	long long int a[200000];
	
	for(int i = 0; i < n; i ++) cin >> a[i];
	
	long long int prev = 0;
	for(int i = 0; i < n; i ++){
		cout << a[i] - prev << " ";
		prev = a[i];
	}
	 
	return 0;
}
