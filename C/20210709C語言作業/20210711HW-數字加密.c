#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(){
	srand((unsigned)time(NULL));
	int a,b,c,d;
	int temp;
	
	a = rand() % 10;
	b = rand() % 10;
	c = rand() % 10;
	d = rand() % 10;
	
	printf("original:%d%d%d%d\n", a, b, c, d);
	
	a = (a + 7) % 10;
	b = (b + 7) % 10;
	c = (c + 7) % 10;
	d = (d + 7) % 10;
	
	printf("after:%d%d%d%d", c, d, a, b);
	
	return 0;
}
