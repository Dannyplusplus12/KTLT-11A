#include <stdio.h>

int colors[] = {31,32,33,34,35,36,37,91,92,93};


int main() {
    int i, j;
    for (i = 1; i <= 10; i++) {
        for (j = 2; j <= 10; j++) {
            printf("\033[%dm", colors[j-2]);
            printf("%dx%d=%-4d ", j, i, j * i);
            printf("\033[0m");
        }
        printf("\n");
    }
    
    return 0;
}
