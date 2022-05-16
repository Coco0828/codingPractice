#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	int **a;
	int r = 3, c = 5;
	a = (int**)malloc(r * sizeof(int*));
	for(int i = 0; i < r; i ++){
		a[i] = (int*)malloc(c * sizeof(int));
	}
	
	
	
	return 0;
}
