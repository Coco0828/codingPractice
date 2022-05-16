#include <stdio.h>

int main(){
	char ISBN1[12];
	int intISBN[10] = {0};
	int i;
	
	printf("\nISBN:");
	scanf("%s", ISBN1);	
	
	/*for(i = 0; i < 12; i++){
		if(ISBN1[i] == 'X') ISBN1[i] = '10';	
	}*/

	for(i = 0; i < 12; i ++){
		if(i == 3 || i == 7) continue;
		printf("%c", ISBN1[i]);	
	}


	//printf("%d", intISBN[0]);
	
	
	/*intISBN[0] = ISBN1[0] - '0';
	intISBN[1] = ISBN1[1] - '0';
	intISBN[2] = ISBN1[2] - '0';
	intISBN[3] = ISBN1[4] - '0';
	intISBN[4] = ISBN1[5] - '0';
	intISBN[5] = ISBN1[6] - '0';
	intISBN[6] = ISBN1[8] - '0';
	intISBN[7] = ISBN1[9] - '0';
	intISBN[8] = ISBN1[10] - '0';*/
	//intISBN[9] = 10;
	
	intISBN[0] = (ISBN1[0] == 'X')?10:ISBN1[0] - '0';
	intISBN[1] = (ISBN1[1] == 'X')?10:ISBN1[1] - '0';
	intISBN[2] = (ISBN1[2] == 'X')?10:ISBN1[2] - '0';
	intISBN[3] = (ISBN1[4] == 'X')?10:ISBN1[4] - '0';
	intISBN[4] = (ISBN1[5] == 'X')?10:ISBN1[5] - '0';
	intISBN[5] = (ISBN1[6] == 'X')?10:ISBN1[6] - '0';
	intISBN[6] = (ISBN1[8] == 'X')?10:ISBN1[8] - '0';
	intISBN[7] = (ISBN1[9] == 'X')?10:ISBN1[9] - '0';
	intISBN[8] = (ISBN1[10] == 'X')?10:ISBN1[10] - '0';
	intISBN[9] = (ISBN1[11] == 'X')?10:ISBN1[11] - '0';
	
	int ISBN2[10];
	
	for(i = 0; i < 10; i++){
		ISBN2[i] = intISBN[i] + ISBN2[i-1];
	}
	
	printf("\n1st time:");
	for(i = 0; i < 10; i++){
		printf("%d ", ISBN2[i]);
	}
	
	int ISBN3[10];
	
	for(i = 0; i < 10; i++){
		ISBN3[i] = ISBN2[i] + ISBN3[i-1];
	}
	
	printf("\n2nd time:");
	for(i = 0; i < 10; i++){
		printf("%d ", ISBN3[i]);
	}
	
	printf("\n");
	(ISBN3[9] % 11 == 0)? printf("YES"):printf("NO");	
	
	return 0;
}
