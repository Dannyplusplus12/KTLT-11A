#include <stdio.h>
#include <math.h>
#include <float.h>

int n;
double a[1000][1000];

double col_sum, row_sum;
int col_idx, row_idx;

void nhap() {
    scanf("%d", &n);
    int i, j;
    for(i = 0; i < n; ++i) {
        for(j = 0; j < n; ++j) {
            scanf("%lf", &a[i][j]);
        }
    }
}

void xuly() {
	int i, j;
	for(i = 0; i < n; ++i) {
		double sum = 0.0;
		for(j = 0; j < n; ++j) {
			sum += a[i][j];
		}
		if(row_sum <= sum) {
			row_sum = sum;
			row_idx = i;
		}
	}
	
	for(j = 0; j < n; ++j) {
		double sum = 0.0;
		for(i = 0; i < n; ++i) {
			sum += a[i][j];
		}
		if(col_sum <= sum) {
			col_sum = sum;
			col_idx = j;
		}
	}
	
	return;
}

void xuat() {
    
    if(row_sum >= col_sum) {
		int i;
		for(i = 0; i < n; ++i) {
			printf("%lf ", a[row_idx][i]);
		}
	}
	else {
		int i;
		for(i = 0; i < n; ++i) {
			printf("%lf ", a[i][col_idx]);
		}
	}
    
}

int main() {
    freopen("matran.inp", "r", stdin);
    freopen("max.out", "w", stdout);
    
    col_sum = DBL_MIN;
    row_sum = DBL_MIN;
	col_idx = 0;
	row_idx = 0;
    
    nhap();
    xuly();
    xuat();


    
    return 0;
}
