#include <stdio.h>
#include <math.h>

int n;
int a[1000][1000];
int sum;

void nhap() {
    scanf("%d", &n);
    int i, j;
    for(i = 0; i < n; ++i) {
        for(j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
}

void xuly() {
	int i, j;
	for(i = 0; i < n; ++i) {
		int biggest = a[i][0];
		int pos = 0;
		for(j = 0; j < n; ++j)
		if(biggest < a[i][j]) {
			biggest = a[i][j];
			pos = j;
		}
		a[i][pos] = a[i][i];
		a[i][i] = biggest;
		sum += biggest;
	}
}

void xuat() {
    int i, j;
    for(i = 0; i < n; ++i) {
        for(j = 0; j < n; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("%d", sum);
}

int main() {
    
    sum = 0;
    
    nhap();
    xuly();
    xuat();
    
    return 0;
}
