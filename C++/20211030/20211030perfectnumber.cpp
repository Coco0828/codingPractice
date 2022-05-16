#include <iostream>
#include <vector>
using namespace std;

int main(){
	int i, j;
	vector<int> perfectNumber;
	vector<int> nums;
	int sum = 0;
	
	for(i = 1; i <= 1000; i ++){
		for(j = 1; j <= i; j ++){
			if(i % j == 0){
				nums.push_back(j);
			}
		}
		for(j = 0; j < nums.size(); j ++){
			sum += nums[j];
		}
		if(sum - i == i) perfectNumber.push_back(i);
		sum = 0;
		nums.erase(nums.begin(), nums.end());
	}
	
	for(i = 0; i < perfectNumber.size(); i ++){
		cout << perfectNumber[i] << " ";
	}
	
	return 0;
}
