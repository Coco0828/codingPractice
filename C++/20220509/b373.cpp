#include <iostream>
using namespace std;

int main(){
	int N, i, j, sum = 0;
	cin >> N;
	
	int nums[10000];
	
	for(i = 0; i < N; i ++) cin >> nums[i];
	
	for(i = 0; i < N; i ++){
		for(j = i+1; j < N; j ++){
			if(nums[i] > nums[j]){
				swap(nums[i], nums[j]);
				sum ++;
			}
		}
	}
	
	cout << sum;
	
	return 0;
}
