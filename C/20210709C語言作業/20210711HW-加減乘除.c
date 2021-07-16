#include <stdio.h>

int main(){
	int n, i;
	int addAnswer = 0;
	int timesAnswer = 1; 
	int stepAnswer = 0;
	
	scanf("%d", &n);
	
	addAnswer = ((1 + n) * n) / 2;			//add
	
	printf("%d\n", addAnswer);
	
	for(i = 1; i <= n; i++)					//times
		timesAnswer *= i;
	
	printf("%d\n", timesAnswer);
	
	for (i = 1; i <= n; i++)				//step
		stepAnswer += i * (n-(i-1));
	
	printf("%d", stepAnswer);
	
	return 0;
}
