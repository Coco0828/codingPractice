#include <stdio.h>

int main(){
	int nums[4];
	int target;
	int i,j;
	
	scanf("nums = %d %d %d %d, target = %d", &nums[0], &nums[1], &nums[2], &nums[3], &target);
	
	for(i = 0; i < 4; i++){
		for(j = i + 1; j < 4; j ++){
			if(nums[i] + nums[j] == target){
				printf("[%d, %d]\n", i, j);
				break;
			}
		}
	}
	
	return 0;
}
