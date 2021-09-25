#include <iostream>
using namespace std;

int main(){
	int nums[10];
	int i;
	int answer[10] = {0};
	
	for(i = 0; i < 10; i ++){
		cin >> nums[i];
	}
	
	for(i = 0; i < 10; i ++){
		if(nums[i] != nums[i+1]){
			answer[i] = nums[i];
		}
	}
	
	for(i = 0; i < 10; i ++){
		cout << answer[i]; 
	}
	
	
	return 0;
}
