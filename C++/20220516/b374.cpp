#include <iostream>
using namespace std;

int main(){
	int N, a, i, max = 0;
	int nums[30001] = {0};
	
	cin >> N;
	
	for(i = 0; i < N; i ++){
		cin >> a;
		nums[a] ++;
	}
	
	for(i = 0; i < N; i ++){
		if(nums[i] >= max){
			max = nums[i];
		}
	}
	
	for(i = 0; i < N; i ++){
		if(nums[i] >= max){
			cout << i << " " << nums[i] << endl;
		}
	}
	
	return 0;
}
