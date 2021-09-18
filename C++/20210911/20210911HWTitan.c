#include <stdio.h>


int main(){
	int mapA[3][5] = {{0,0,0,1,1}, {0,1,0,1,1}, {1,1,1,0,1}};
	int mapB[3][5] = {{0,1,1,0,0}, {1,0,0,1,1}, {1,1,1,1,1}};
	int i, j;
	
	int mapC[3][5];

	for(i = 0; i < 3; i ++){
		for(j = 0; j < 5; j ++){
			if(mapA[i][j] == 0) mapC[i][j] = 1;
			else if(mapA[i][j] == 1) mapC[i][j] = 0;
		}
	}
	
	printf("Map C:\n");
	for(i = 0; i < 3; i ++){
		for(j = 0; j < 5; j ++){
			printf("%d", mapC[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	int mapD[3][5];
	
	for(i = 0; i < 3; i ++){
		for(j = 0; j < 5; j ++){
			if(mapB[i][j] == 1 && mapC[i][j] == 1) mapD[i][j] = 1;
			else mapD[i][j] = 0;
		}
	}
	
	printf("Map D:\n");
	for(i = 0; i < 3; i ++){
		for(j = 0; j < 5; j ++){
			printf("%d", mapD[i][j]);
		}
		printf("\n");
	}
	
	int mapX[3][5];
	
	
	
	return 0;
}
