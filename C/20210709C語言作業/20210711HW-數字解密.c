#include <stdio.h>

int main(){
	int input;
	int a,b,c,d;
	
	scanf("%d", &input);
	
	a = input / 1000 % 10;
	b = input / 100 % 10;
	c = input / 10 % 10;
	d = input % 10;
	
	//printf("%d %d %d %d\n",a,b,c,d);
	
	/*a += 3;
	b += 3;
	c += 3;
	d += 3;
	
	printf("%d %d %d %d", a,b,c,d);*/
	
	a = (a > 6)?a - 7:a + 3;
	b = (b > 6)?b - 7:b + 3;
	c = (c > 6)?c - 7:c + 3;
	d = (d > 6)?d - 7:d + 3;

	printf("%d%d%d%d",c,d,a,b);
	
	return 0;
}
