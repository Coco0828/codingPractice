#include <stdio.h>
#include <string.h>

int main(){
	int nums[5];
	int target;
	int i,j;
	
	scanf("%d %d %d %d %d", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);
	
	printf("target: ");
	scanf("%d", &target);
	
	for(i = 0; i < strlen(nums); i++){
		if(nums[i] + nums[i+1] == target){
			printf("[%d, %d]\n", i, i+1);
		}
	}
	
	return 0;
}
