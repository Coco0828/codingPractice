#include <stdio.h>

int main(){
	int num,a,b;
	
	scanf("%d",&num);
	
	printf("numbers:");
	scanf("%d %d", &a, &b);
	
	if (b - a == 1) printf("%d %d yes", a, b);
	else if (a - b == 1) printf("%d %d yes", b, a);
	else printf("%d %d no", a, b);
	
	return 0;
} 
