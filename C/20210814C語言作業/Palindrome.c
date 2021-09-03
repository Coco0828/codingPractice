#include <stdio.h>

int main(){
	char *input;
	input = (char*)malloc(3 * sizeof(char));
	
	scanf("%s", input);
	
	if(input[0] == input[2]) printf("true");
	else printf("false");
	
	return 0;
}
