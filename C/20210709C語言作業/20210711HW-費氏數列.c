#include <stdio.h>

int main(){
	int n;
	int fiboNum;
	
	scanf("%d", &n);
	fiboNum = Fibonacci(n); 
	printf("%d", fiboNum);
	
	return 0;
}
int Fibonacci(int n)
{
	if(n==1||n==2)return 1;
	return Fibonacci(n-1)+Fibonacci(n-2);
}
