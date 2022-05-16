#include <stdio.h>
#include <stdlib.h>

int main(){
	int *seed, i;
	int step, mod;
	
	printf("\n");
	
	printf("STEP:");
	scanf("%d", &step);
	
	printf("MOD:");
	scanf("%d", &mod);
	
	seed = (int*)malloc(mod * sizeof(int));
	
	seed[0] = 0;
	
	for (i = 0;i < mod; i++){
		seed[i+1] = (seed[i] + step) % mod;
	}
	
	sort(seed, mod);
		
	for (i = 0;i < mod; i++){
		printf("%d ", seed[i]);
	}
	
	int a = 0;
	
	for (i = 0;i < (mod - 1); i++){
		if (seed[i+1] <= seed[i]){
			a = 1;
			break;
		}
	}
	
	(a == 1)?printf("BAD"):printf("GOOD");
	
	return 0;
}

void sort(int *ar, int num){
	int i,j,temp;
	
	for(i = 0; i < num; i ++){
		for(j = i + 1; j < num; j ++){
			if(ar[i] > ar[j]){
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
}
