#include <stdio.h>

int main(){
	float height = 100.00;
	int i;
	float length = 100.00;
	
	for(i = 1; i < 11; i++){
		height /= 2;
		length += (height * 2);
	}
	
	printf("10th time:%.2f\n", height);
	printf("total length:%.2f", length);
	
	return 0;
}
