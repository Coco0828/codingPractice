#include <stdio.h>

int main(){
	int n;
	
	scanf("%d", &n);
	
	whatPrime(&n);

	return 0;
} 

void whatPrime(int *n){
    if (*n == 1 || *n == 2)printf("no prime brfore %d", *n);
    else{
        int num;
        
    	//printf("2\n");
    	//for (num = 3; num < *n; num += 2)if(isPrime(&num) == 1)printf("%d\n",num);
		
		for (num = 3; num < *n; num += 2){
			if(*n % 2 == 0 && num == 3)printf("2\n");
			if(isPrime(&num) == 1 && *n % num == 0)printf("%d\n",num);
		}
	
	}
}

int isPrime(int *num){
    if (*num == 2)return 1;
    int k;
    for (k = 3; k <= (*num / 2); k += 2){
        if (*num % k == 0)return 0;
    }
    return 1;
}
