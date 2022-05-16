/*#include<stdio.h>


int main(){
    int number,array[10], i;
    FILE *fp;
    char* filename = "input.txt";
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
    }
    fscanf(fp,"%d", &number);
      
    if(number > 0){
        for(i = 0;i < number;i ++){
            fscanf(fp,"%d",&array[i]);
        }
    }
    printf("Loading data from intput.txt completed\n");
    fclose(fp);
    for(i = 0;i < number;i ++)
        printf("%d ",array[i]);
    return 0;
}*/

#include<stdio.h>
#include<stdlib.h>


int main(){
    int number,*array;
    FILE *fp;
    
    input(&number, array, &fp);
    output(array, &number);
	
    return 0;
}

void input(int *number, int *array, FILE *fp){
	int i;
	char* filename = "input.txt";
	fp = fopen(filename, "r");
	
    if (fp == NULL){
        printf("Could not open file %s",filename);
    }
    fscanf(fp,"%d",number);
    
    array = (int*)malloc(*number * sizeof(int));
    
    if(*number > 0){
        for(i = 0;i < *number;i ++){
            fscanf(fp,"%d",&array[i]);
        }
    }
    printf("Loading data from intput.txt completed\n");
    fclose(fp);
    sort(array, number);
}

void sort(int *array, int *number){
	int temp, i ,j;
    for(i = 0; i < *number; i ++){
    	for(j = i + 1; j < *number; j ++){
    		if(array[i] > array[j]){
    			temp = array[i];
    			array[i] = array[j];
    			array[j] = temp;
			}
		}    	
	}
	
	for(i = 0;i < *number;i ++)
        printf("%d ",array[i]);
}

void output(int *array, int *number){
	int i;
	FILE *f = fopen("output.txt", "w");
    if (f == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    fprintf(f,"%d\n",*number);
    for(i = 0;i < *number;i ++){
        fprintf(f,"%d ",array[i]);
    }
    printf("Writing data to output.txt completed\n");
    fclose(f);
	
}

