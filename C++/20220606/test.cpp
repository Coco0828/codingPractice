#include <stdio.h>
#include <stdlib.h>
#include <string.h> // strtok

int main() {
    char str[] = "3;4;";
    const char* d = ";";
    char *p;
    p = strtok(str, d);
    
    while (p != NULL) {
        printf("%s\n", p);
        p = strtok(NULL, d);		   
    }
    return 0;
}
