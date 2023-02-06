#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	
	vector<int> nums;
	int input;
	for(int i = 0; i < n; i ++){
		cin >> input;
		nums.push_back(input);
	}
	
	reverse(nums.begin(), nums.end());
	for(int i = 0; i < n-1; i ++){
		cout << nums[i] << " ";
	}
	cout << nums[n-1];
	
	return 0;
}
