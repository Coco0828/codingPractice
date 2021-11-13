#include <iostream>
using namespace std;

int main(){
	int nums[4];
	int val;
	
	int i;
	int a, index = 0;
	
	while(cin >> a){
		nums[index++] = a;
		char enter = getchar();
		if(enter == '\n'){
			break;
		}
	}
	
	cin >> val;
	
	for(i = 0; i < 4; i ++){
		if(nums[i] == val){
			nums[i] = 0;
		}
	}
	
	int k = 0;
	
	for(i = 0; i < 4; i ++){
		if(nums[i] >= 1 && nums[i] <= 9) k++;
	}
	
	cout << k << ", nums = [";
	
	for(i = 0; i < 4; i ++){
		if(nums[i] >= 1 && nums[i] <= 9) cout << nums[i] << ",";
		else if(nums[i] == 0) cout << ",";
	}
	
	cout << "]";
	
	return 0;
}
