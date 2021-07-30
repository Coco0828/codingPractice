#include <stdio.h>
#include <string.h>

int main(){
	char input[10];
	gets(input);
	
	int i;
	int j;
	
	for(i = 0; i <= strlen(input); i ++){
		if(input[i] >= 'a' && input[i] <= 'z'){
			input[i] -= 32;
			printf("%c", input[i]);
		}else printf("%c", input[i]);
	}
	printf("\n");
	
	for(j = 0; j <= strlen(input); j ++){
		if(input[j] >= 'A' && input[j] <= 'Z'){
			input[j] += 32;
			printf("%c", input[j]);
		}else printf("%c", input[j]);
	}
}
