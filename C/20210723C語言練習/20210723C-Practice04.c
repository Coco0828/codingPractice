#include <stdio.h>

void swap_pt(int *,int *);
void swap_vl(int,int);

int main(void){
	/*//int ptri; //整數型態的變數
	//int *ptri; //整數型態的指標
	//char *ptri; //字元型態的指標

	int a = 10,b;
	int *p;

	p = &a;
	*p = *(&a);
	b = *p;
	*p = 20;

	printf("a = %d\nb = %d", a, b);

	//output: a = 20; b = 10;	*/
	
	/*int a; //整數型態的變數
	int *b; //整數型態的指標
	char c;
	char *d; //字元型態的指標
	
	printf("%d %d %d %d",sizeof(a), sizeof(*b), sizeof(c), sizeof(*d));*/
	
	int a=3, b=5;
    swap_vl(&a, &b);
    printf("%d %d ",a,b);
    swap_pt(&a, &b);
    printf("%d %d",a,b);
    
    return 0; 
	
}

void swap_pt(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_vl(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

