#include<stdio.h>
int main(){
	/*int i;
	for(i = 0;i < 10;i ++){
	    if(i == 7)break;
	    if(i == 2)continue;
	    printf("%d", i);
	}
	return 0;*/ 
	/*int a = 1;
	add(a);
	printf("a = %d", a);
}
void add(int a){
	a += 3;*/ 
	
	int a = 1;
	add(&a);
	printf("a = %d", a);

}

void add(int *a){
	*a += 3;
}


