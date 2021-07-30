#include <stdio.h>
#include <string.h>

int main(){
	char input[10];
	gets(input);
	
	int i;
	int letterNum = 0;
	int spaceNum = 0;
	int numberNum = 0;
	int otherNum = 0; 
	
	for (i = 0; i <= strlen(input); i ++){
		if(((input[i] >= 'a') && (input[i] <= 'z')) || ((input[i] >= 'A') && (input[i] <= 'Z')))letterNum++;
		else if(input[i] == " ") spaceNum++;
		else if(input[i] >= 0 && input[i] <= 9) numberNum++;
		else otherNum++;
	}
	
	numberNum--;
	
	printf("letters:%d\n", letterNum);
	printf("spaces:%d\n", spaceNum);
	printf("numbers:%d\n", numberNum);
	printf("others:%d", otherNum);
	
	return 0;
}
