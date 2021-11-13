#include <iostream>
#include <vector>
using namespace std;


int main(){
	int nums[104];
	int i;
	
	int a, index = 0;
	
	while(cin >> a){
		nums[index++] = a;
		char enter = getchar();
		if(enter == '\n'){
			break;
		}
	}
	
	int target;
	
	cin >> target;
	
	int answer = 0;
	
	for(i = 0; i < 104; i ++){
		if(nums[i] == target){
			answer = i;
			break;
		}
	} 
	
	cout << answer; 
	
	return 0;
}
