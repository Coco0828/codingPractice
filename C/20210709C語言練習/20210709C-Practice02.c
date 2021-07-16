#include<stdio.h>
#include <time.h> 
#include <stdlib.h>

/*int main(){
	int i = 3;
	int a;
	a = ++i;
	printf("%d\n",i);
	printf("%d",a);
}*/

/*void swap(int *a,int *b){
    *b = *a;
    printf("%d %d\n",*a,*b);
}
int main() {
    int a = 1 ;
    int b = 0 ; //將a的值複製到b的新記憶體區域
    swap(&a,&b);
    //b = a;
    printf("%d\n",a); //a = number 110
    printf("%d",b); //b = number 120
    return 0;
}*/

/*#define MAX 32767 
#define WORD "This is a test!" 
#define AREA(w, h) ((w)*(h)) 
#define POWER(i) (i)*(i)*(i) 

int main() {
	int i = 0;
    printf("%d \n", MAX); 
    printf(WORD); 
    printf("area = %d \n", AREA(5, 3)); 
    printf("%d * %d * %d = %d \n", i+1, i+1, i+1, POWER(i+1));
    return 0;
}*/

/*#define PI 3.14

float area(int i){
	float answer;
	answer = i*i*PI;
	return answer;
}

float diameter(int i){
	float answer;
	answer = i*2;
	return answer;
}

float circumference(int i){
	float answer;
	answer = i*2*PI;
	return answer;
}


int main(){
	int i;
	printf("radius:");
	scanf("%d", &i);
	printf("\narea:%.2f\n", area(i));
	printf("diameter:%.2f\n", diameter(i));
	printf("circumference:%.2f", circumference(i));
	
	return 0;
}*/

int main(){
	srand((unsigned)time(NULL));
	int num1, num2;
	int input1, input2;
	int times = 0;
	
	/*num1 = 1 + rand() % 5;
	num2 = 6 + rand() % 5;
	
	printf("please input the first number:");
	scanf("%d", &input1);
	printf("please input the second number:");
	scanf("%d", &input2);
	
	if(num1 == input1 && num2 == input2) printf("first prize\n");
	else if(num1 == input1 || num2 == input2){
		printf("second prize\n");
		printf("the correct number is %d and %d", num1, num2);
	}
	else{
		printf("try again\n");
		printf("the correct number is %d and %d\n", num1, num2);
		num1 = 1 + rand() % 5;
		num2 = 6 + rand() % 5;
		printf("please input the first number:");
		scanf("%d", &input1);
		printf("please input the second number:");
		scanf("%d", &input2);
	}*/
	
	do{
		times ++;
		
		
		while(times > 1){
			printf("try again\n");
			printf("the correct number is %d and %d\n", num1, num2);
			break;
		}
		
		num1 = 1 + rand() % 5;
		num2 = 6 + rand() % 5;
		
		printf("please input the first number:");
		scanf("%d", &input1);
		printf("please input the second number:");
		scanf("%d", &input2);
		
	}while(!(num1 == input1 && num2 == input2) && !(num1 == input1 || num2 == input2));
	
	if (num1 == input1 && num2 == input2) printf("first prize\n");
	else if(num1 == input1 || num2 == input2){
		printf("second prize\n");
		printf("the correct number is %d and %d", num1, num2);
	}
	
	return 0;
}


