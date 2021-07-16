#include <stdio.h>

/*int main(){
	
	int n;
	scanf("%d", &n);
	
	int hanoi = {{},{},{}}
	
	return 0;
}*/ 

void hanoi(int n, char A, char B, char C) {
    if(n == 1) printf("Move sheet from %c to %c\n", A, C);
    else {
        hanoi(n-1, A, C, B);
        hanoi(1, A, B, C);
        hanoi(n-1, B, A, C);
    }
}

int main() {
    int n;
    printf("number of plates¡G");
    scanf("%d", &n);
    hanoi(n, 'A', 'B', 'C');
    return 0;
} 
