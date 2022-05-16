#include <stdio.h>
#include <stdlib.h>

int main(){
	/*int num,i, temp;
	
	scanf("%d", &num);
	
	int *arr;
    arr = (int*)malloc(sizeof(int)*num);
    
    for(i = 0; i < num; i ++){
    	scanf("%d", arr + i);
	}	
	
	for(i = 0; i < num; i ++){
		temp = arr + i;
		arr + i = arr + (num - i - 1);
		arr + (num - i - 1) = temp;
	}
	
	for(i = 0; i < num; i ++){
		printf("%d\n", *(arr + i));		
	}*/
	
	int names, i, letters;
	
	printf("students:"); 
	scanf("%d", &names);
	printf("letters:");
	scanf("%d", &letters);
	
	char **name;
	name = (char**) malloc(names * sizeof(char*));
	
	for(i = 0; i < names; i ++){		
		name[i] = (char*) malloc(letters * sizeof(char));
		
	}
	
	name[0] = "王小一";
	name[1] = "王小二";
	name[2] = "王小三";
	
	for(i = 0; i < names; i ++){
		printf("%s\n", *(name + i));		
	}	
	
	return 0;	
}
