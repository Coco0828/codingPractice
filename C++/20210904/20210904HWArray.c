#include <stdio.h>

int main(){
	int input[98] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8, 7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 7, 8, 7};
	int mean, median, mode;
	int i, m, k = 0, j = 0;
	
	sort(input);
	
	printf("after sort: %d\n", input);
	
	for(i = 0; i < 98; i ++){
		k += input[i];
	}
	mean = k/98;
	printf("mean: %d\n", mean);
	
	median = (input[49] + input[50]) / 2;
	printf("median: %d\n", median);
	
	for(m = 0; m < 98; m ++){
		k = 0;
		while(input[m] == input[m+1]){
			k ++;
		}
		if(k > j){
			j = k;
			mode = input[m];
		}
	}
	printf("mode: %d", mode);
	
	return 0;
}

void sort(int *ar){
	int i,j,temp;
	
	for(i = 0; i < 98; i ++){
		for(j = i + 1; j < 98; j ++){
			if(ar[i] > ar[j]){
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
}
