#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n, input;
	cin >> n;
	
	vector<int> a;
	
	for(int i = 0; i < n; i ++){
		cin >> input;
		a.push_back(input);
	}
	
	sort(a.begin(), a.end());
	
	for(int i = 0; i < n; i ++) cout << a[i] << " ";
	
	return 0;
}
