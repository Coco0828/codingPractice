#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n, input;
	cin >> n;
	
	vector<int> a;
	for(int i = 0; i < n; i ++){
		cin >> input;
		a.push_back(input);
	}
	
	int b = a[n-1];
	int sum = 0;
	
	for(int i = 0; i < n; i ++){
		if((i+1) % b == 1){
			sum += a[i];
		}
	}
	
	int m = sum % n;
	
	if(m != 0) cout << m << " " << a[m-1] << endl;
	else cout << n << " " << b << endl;
	
	return 0;
}
