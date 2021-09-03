#include <stdio.h>

int main(){
	char input[4];
	char num[4];
	int i,k = 0;
	
	scanf("%s", input);
	
	if(input[0] == '-'){
		k = 1;
	}
	
	for(i = 0; i < 4; i ++){
		if(input[i] != '0' && k == 1){
			num[0] = '-';
			num[i+1] = input[3 - i];
		}
		else num[i] = input[3 - i];
	}
	
	printf("%c%c%c%c", num[0], num[1], num[2], num[3]);
	
	return 0;
} 
