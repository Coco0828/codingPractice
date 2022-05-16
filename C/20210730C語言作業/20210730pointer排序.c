#include <stdio.h>
#include <stdlib.h>

int main(){
	int num, i, answer;
	
	scanf("%d", &num);
	
	int *ar;
    ar = (int*)malloc(sizeof(int)*num);
	
	for(i = 0;i < num;i ++){
	    scanf("%d", ar+i);
	}

	sort(ar, num);	
	
	printf("\n");
	
	for(i = 0; i < num; i ++){
		printf("%d\n", *(ar + i));		
	}
	
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
