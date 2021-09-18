#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

int main(){
	int num;
	scanf("%d", &num);
	
	int i, j, k;
	char zero = "0";
	
	char *song;
	song = (char*)malloc(num * sizeof(char));
	
	for(i = 0; i < num; i ++){
		song[i] = (char*)malloc(7 * sizeof(char));
		scanf("%s", song[i]);
	}
	
	for(i = 0; i < num; i ++){	
		for(k = 7; k >= 0; k --){
			if(song[i] >= "a" && song[i] <= "z"){
				for(j = i+1; i < num; i ++){
					if(strcmp(song[i][k], song[j][0]) == 0){
						strcpy(song[i], zero);
						strcpy(song[j], zero);
					}
				}		
			} 
		}
	}
	
	int m = 0;
	
	for(i = 0; i < num; i ++){
		if(strcmp(song[i], zero)){
			m = 1;
		}
	}
	
	(m == 0)?printf("OK"):printf("NG");
	
	return 0;
}
