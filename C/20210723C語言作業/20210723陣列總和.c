#include <stdio.h>

int main(){
	int num, i;
	int array[10];
	int answer = 0;
		
	scanf("%d", &num);

    for(i = 0;i < num;i ++){
        scanf("%d", &array[i]);
    }
    
    add(&answer, &array, num);
	
	printf("%d", answer);
	
	return 0;
}

void add(int *answer, int *array, int num){
	int i;
	
	for(i = 0; i < num; i ++){
		*answer += array[i];
	}
	
}
