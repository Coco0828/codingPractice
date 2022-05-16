#include <stdio.h>
#include <string.h>

int main(){
	char *string[100];
	int i;
	
	scanf("%s", &string);
	
	for(i = 0; i < strlen(string); i ++){
		secret(&string[i]);
	}
	
	printf("%s", string);
	
	return 0;
}

void secret(int *str){
	int i;
	int k = -7;
	
	for(i = 0; i < strlen(str); i ++){
		str[i] += k;
	}
}
