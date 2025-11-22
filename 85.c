#include <stdio.h>

char a[100000];
int n;

int main() {
    FILE *f = fopen("input.c", "r");
    n = 0;
    while((a[n] = fgetc(f)) != EOF) n++;
    fclose(f);

    f = fopen("input.c", "w");
    int i;
    for(i = 0; i < n; i++) {
        if(a[i] == '/' || a[i] == '*') continue;
        fputc(a[i], f);
    }
    fclose(f);
    return 0;
}
