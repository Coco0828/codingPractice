#include <stdio.h>

void swap_pt(int *,int *);
void swap_vl(int,int);

int main(void){
	/*//int ptri; //��ƫ��A���ܼ�
	//int *ptri; //��ƫ��A������
	//char *ptri; //�r�����A������

	int a = 10,b;
	int *p;

	p = &a;
	*p = *(&a);
	b = *p;
	*p = 20;

	printf("a = %d\nb = %d", a, b);

	//output: a = 20; b = 10;	*/
	
	/*int a; //��ƫ��A���ܼ�
	int *b; //��ƫ��A������
	char c;
	char *d; //�r�����A������
	
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

