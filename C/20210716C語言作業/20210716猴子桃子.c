#include <stdio.h>

int main(){
	int i;
	int peach = 1;
	
	for(i = 0; i < 10; i ++){
		peach = (peach + 1) * 2;
	}
	printf("%d", peach);
	
	return 0;
}
