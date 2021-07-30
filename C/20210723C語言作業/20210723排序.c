#include <stdio.h>

int main(){
	int num, i, j, temp;
	
	//scanf("%d", &num);
	
	int ar[3] = {5,2,8};
	
	/*for(i = 0;i < num;i ++){
	    scanf("%d", &ar[i]);
	}*/

	//sort(&ar, num);
	
	for(i = 0; i < 3; i ++){
		for(j = 1; j < 3; j ++){
			if(ar[i] > ar[j]){
				temp = ar[i];
				ar[i] = ar[j];
				ar[j] = temp;
			}
		}
	}
	
	printf("%d",ar);
	
	return 0;
	
}
/*void sort(int *array, int num){
	int i,j,*temp;
	
	for(i = 0; i < num; i ++){
		for(j = i + 1; j < num; j ++){
			if(array[i] > array[j]){
				temp = &array[i];
				array[i] = array[j];
				array[j] = *temp;
			}
		}
	}
}*/
