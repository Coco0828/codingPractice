#include <stdio.h>

int main(){
	char *roman;
	roman = (char*)malloc(15 * sizeof(char));
	
	scanf("%s", roman);
	
	int i;
	int number = 0;
	int skip = 0;
	
	for(i = 0; i < 15; i ++){
		if(skip == 1){
			skip = 0;
			continue;
		}
		
		if(roman[i] == 'I' && roman[i + 1] == 'V'){
			number += 4;
			skip = 1;
			continue;
		}
		if(roman[i] == 'I' && roman[i + 1] == 'X'){
			number += 9;
			skip = 1;
			continue;
		}
		if(roman[i] == 'X' && roman[i + 1] == 'L'){
			number += 40;
			skip = 1;
			continue;
		}
		if(roman[i] == 'X' && roman[i + 1] == 'C'){
			number += 90;
			skip = 1;
			continue;
		}
		if(roman[i] == 'C' && roman[i + 1] == 'D'){
			number += 400;
			skip = 1;
			continue;
		}
		if(roman[i] == 'C' && roman[i + 1] == 'M'){
			number += 900;
			skip = 1;
			continue;
		}
		
		if(roman[i] == 'I') number++;
		else if(roman[i] == 'V') number += 5;
		else if(roman[i] == 'X') number += 10;
		else if(roman[i] == 'L') number += 50;
		else if(roman[i] == 'C') number += 100;
		else if(roman[i] == 'D') number += 500;
		else if(roman[i] == 'M') number += 1000;
	}
	
	printf("integer: %d", number);
	
	return 0;
}
