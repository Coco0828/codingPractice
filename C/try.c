#include<stdio.h>
/*int main(){
	int i;
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
	a += 3;*
	
	int a = 1;
	add(&a);
	printf("a = %d", a);

}

void add(int *a){
	*a += 3;
}*/ 


#define NUM 35 
#define WORD "This is a test!" 
#define AREA(w, h) ((w)*(h)) 
#define POWER(i) (i)*(i)*(i) 

int main() {
	int i = 5;
	
    printf("%d \n", NUM); 
    printf(WORD"\n"); 
    printf("area = %d \n", AREA(5, 3)); 
    printf("%d * %d * %d = %d \n", i, i, i, POWER(i));
    return 0;
}

