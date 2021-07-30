#include <stdio.h>

int main(){
	char alphabet = 'A';
	int i;
	
	for(i = 0; i < 26; i ++){
		printf("%c ", alphabet);
		alphabet ++;
	}
	
	return 0;
}
