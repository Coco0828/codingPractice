#include <stdio.h>

int main(){
	
	int i,j,k;
	
	for(j = 1; j < 4; j+=2){
		(j == 1)?printf("    "):printf("   ");
		for(i = 1; i <= j; i ++)printf("*");
		printf("\n");
	}
	k = 0;
	for(j = 6; j < 9; j+=2){
		k ++;
		(j == 6)?printf("  "):printf(" ");
		for(i = 1; i <= j; i ++)printf("*");
		printf("\n");
	}
	
	printf("  ");
	for(j = 0; j < 6; j ++){
		printf("*");
	}
	printf("\n");
	
	for(j = 3; j > 0; j-=2){
		(j == 1)?printf("    "):printf("   ");
		for(i = 1; i <= j; i ++)printf("*");
		printf("\n");
	}
	
	return 0;
	
}
