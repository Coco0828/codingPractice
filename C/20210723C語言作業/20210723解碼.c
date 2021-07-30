#include <stdio.h>
#include <string.h>

int main(){
	char *string[1];
	int i;
	
	scanf("%s", &string);
	
	secret(&string[0]);
	
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
