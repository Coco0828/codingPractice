#include <iostream>
using namespace std;

int main(){
	string input;
	cin >> input;
	
	int nums[9];
	
	for(int i = 0; i < 9; i ++) nums[i] = input[i] - '0';
	
	int max1 = 0, max2 = 0, max1ID;
	for(int i = 0; i < 9; i ++){
		if(nums[i] > max1){
			max1 = nums[i];
			max1ID = i;
		}
	}
	for(int i = 0; i < 9; i ++){
		if(i != max1ID && nums[i] > max2){
			max2 = nums[i];
		} 
	}
	
	int sum = (max1 * max1) + (max2 * max2);
	int x = 0;
	
	cout << sum << endl;
	cout << sum / 100 << endl;
	cout << sum % 100 << endl;
	cout << sum % 10 << endl;
	cout << (sum % 100) - (sum % 10) << endl;
	
	if(sum/100 == nums[6]){
		if((sum%100 - sum%10) == nums[7]){
			if(sum%100 == nums[8]){
				cout << "Good Morning!";
				x = 1;
			}
		}
	}
	if(!x) cout << "SPY!";
	
	cout << endl;
	
	return 0;
}
