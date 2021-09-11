#include <stdio.h>

int main(){
	char a[200], b[200], c[200], common[200];
	int i;
	
	scanf("%s %s %s", a, b ,c);
	
	for(i = 0; i < 200; i ++){
		if(a[i] == b[i] && b[i] == c[i]) common[i] == a[i];
		else break;
	}
	
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%s\n", c);
	printf("%s", common);
	
	return 0;
}
