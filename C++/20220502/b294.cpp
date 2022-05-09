#include <iostream>
using namespace std;

int main(){
	int n, i;
	cin >> n;
	
	int nums[1000];
	int price = 0;
	
	for(i = 0; i < n; i ++) cin >> nums[i];
	
	for(i = 0; i < n; i ++) price += (nums[i] * (i+1));
	
	cout << price;
	
	return 0;
}
