#include <iostream>
using namespace std;

int main(){
	string input;
	int nums[10];
	int i;
	int numAnswer[10] = {0};
	string answer;
	
	cin >> input;
	
	for(i = 0; i < 10; i ++){
		nums[i] = input[i] - '0';
	}
    
	for(i = 0; i < 10; i ++){
		if(nums[i] != nums[i+1]){
			numAnswer[i] = nums[i];
		}
	}
	
	for(i = 0; i < 10; i ++){
		if(numAnswer[i] != 0){
			answer[i] = numAnswer[i];
		}
	}
	
	cout << answer;
	
	return 0;
}
