#include<stdio.h>
int main(){
	
	int answer;
	int k,i,j;
	printf("\n");
	for(k = 1; k < 4; k++){
		for(j = 1; j < 10; j++){
			for(i = 3 * k - 2; i < 3 * k + 1; i++){
				answer = i * j;
				if(answer <= 9) printf("  %dx %d= %d     ", i, j, answer);
				if(answer > 9) printf("  %dx %d=%d     ", i, j, answer);
			}
			printf("\n");
		}	
		printf("\n");
	}
	return 0;
	
	/*int answer;
	int i,j;
	for(i = 1; i < 10; i++){
		for(j = 1; j < 10; j++){
			answer = i * j;
			printf("%dx %d= %d\n", i, j, answer);
			if(j == 9) printf("\n");
		}
	}
	return 0;*/
}
