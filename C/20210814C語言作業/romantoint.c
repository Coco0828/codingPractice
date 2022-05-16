#include <stdio.h>

typedef struct{
   char *sym;
   int val;
}numeral;

int maxNume(numeral *nu, int num){
   int i, index;
   for(i = 0; i<15; i++){
      if(nu[i].val <= num)
         index = i;
   }
   return index;
}

void decToRoman(numeral *nu, int num){
   int max;
   if(num != 0){
      max = maxNume(nu, num);
      printf("%s", nu[max].sym);
      num -= nu[max].val;//decrease number
      decToRoman(nu, num);//recursively print numerals
   }
}

int main(){
	char *roman1, *roman2;
	roman1 = (char*)malloc(15 * sizeof(char));
	roman2 = (char*)malloc(15 * sizeof(char));
	
	while(getchar() != ' ') scanf("%s", roman1);
	scanf("%s", roman2);
	
	int i;
	int number1 = 0, number2 = 0;
	int skip = 0;
	
	for(i = 0; i < 15; i ++){
		if(skip == 1){
			skip = 0;
			continue;
		}
		
		if(roman1[i] == 'I' && roman1[i + 1] == 'V'){
			number1 += 4;
			skip = 1;
			continue;
		}
		if(roman1[i] == 'I' && roman1[i + 1] == 'X'){
			number1 += 9;
			skip = 1;
			continue;
		}
		if(roman1[i] == 'X' && roman1[i + 1] == 'L'){
			number1 += 40;
			skip = 1;
			continue;
		}
		if(roman1[i] == 'X' && roman1[i + 1] == 'C'){
			number1 += 90;
			skip = 1;
			continue;
		}
		if(roman1[i] == 'C' && roman1[i + 1] == 'D'){
			number1 += 400;
			skip = 1;
			continue;
		}
		if(roman1[i] == 'C' && roman1[i + 1] == 'M'){
			number1 += 900;
			skip = 1;
			continue;
		}
		
		if(roman1[i] == 'I') number1++;
		else if(roman1[i] == 'V') number1 += 5;
		else if(roman1[i] == 'X') number1 += 10;
		else if(roman1[i] == 'L') number1 += 50;
		else if(roman1[i] == 'C') number1 += 100;
		else if(roman1[i] == 'D') number1 += 500;
		else if(roman1[i] == 'M') number1 += 1000;
	}
	
	for(i = 0; i < 15; i ++){
		if(skip == 1){
			skip = 0;
			continue;
		}
		
		if(roman2[i] == 'I' && roman2[i + 1] == 'V'){
			number2 += 4;
			skip = 1;
			continue;
		}
		if(roman1[i] == 'I' && roman1[i + 1] == 'X'){
			number1 += 9;
			skip = 1;
			continue;
		}
		if(roman2[i] == 'X' && roman2[i + 1] == 'L'){
			number2 += 40;
			skip = 1;
			continue;
		}
		if(roman2[i] == 'X' && roman2[i + 1] == 'C'){
			number2 += 90;
			skip = 1;
			continue;
		}
		if(roman2[i] == 'C' && roman2[i + 1] == 'D'){
			number2 += 400;
			skip = 1;
			continue;
		}
		if(roman2[i] == 'C' && roman2[i + 1] == 'M'){
			number2 += 900;
			skip = 1;
			continue;
		}
		
		if(roman2[i] == 'I') number2++;
		else if(roman2[i] == 'V') number2 += 5;
		else if(roman2[i] == 'X') number2 += 10;
		else if(roman2[i] == 'L') number2 += 50;
		else if(roman2[i] == 'C') number2 += 100;
		else if(roman2[i] == 'D') number2 += 500;
		else if(roman2[i] == 'M') number2 += 1000;
	}
	
	printf("%d %d\n", number1, number2);
	
	//number1 -= 1;
	
	int sub;
	if(number1 >= number2) sub = number1 - number2;
	else sub = number2 - number1;
	
	numeral nume[20] = {{"I",1},{"IV",4},{"V",5},{"IX",9}, {"X",10},{"XL",40},{"L",50},{"XC",90},
	{"C",100},{"CD",400},{"D",500},{"CM",900},{"M",1000},{"MMMM",4000},{"V'",5000}};

   	if(sub > 0 && sub <= 5000){
      decToRoman(nume, sub);
	}
}
