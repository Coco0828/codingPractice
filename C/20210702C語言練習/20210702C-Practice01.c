#include<stdio.h>
int sum(int,int);
void Print(int,int);
int main(){
    int a,b;
    printf("Please input the value of a:");
    scanf("%d", &a);
    printf("Please input the value of b:");
    scanf("%d", &b);
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    
    int i;
    for(i = 0;i < 10;i ++)
        (i % 2)?printf(""):printf("%d\n",i);
    
    sum(a,b);
    Print(a,b);
    
    return 0;
}
// sum() integer
int sum(int a,int b){
    return a+b;
}

void Print(int a,int b){
    printf("%d",a+b);
}
