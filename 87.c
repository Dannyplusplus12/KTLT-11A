#include <stdio.h>
#include <math.h>
#include <float.h>

int n, m;
int a[1000][1000];
int b[1000][1000];

int count(int x, int y) {
	int res, i, j;
	res = 0;
	for(i = -1; i <= 1; ++i) {
		for(j = -1; j <= 1; ++j) {
			if(i == 0 && j == 0) continue;
			if( ((x+i)>=0 && (x+i)<n) && ((y+j)>=0 && (y+j)<m))
				res += a[x+i][y+j];
		}
	}
	return res;
}

void nhap() {
    scanf("%d %d", &n, &m);
    int i, j;
    for(i = 0; i < n; ++i) {
        for(j = 0; j < m; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
}

void xuat() {
    
    int i, j;
    for(i = 0; i < n; ++i) {
		for(j = 0; j < m; ++j) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
    
}

void xuly() {
	
	int i, j, c;
	for(i = 0; i < n; ++i) {
		for(j = 0; j < m; ++j) {
			c = count(i, j);
			if(c == 3) {
				b[i][j] = 1;
			}
			else if(c < 2) {
				b[i][j] = 0;
			}
			else if(c > 3) {
				b[i][j] = 0;
			}
			else {
				b[i][j] = a[i][j];
			}
			
		}
	}
	
	for(i = 0; i < n; ++i) {
		for(j = 0; j < m; ++j) {
			a[i][j] = b[i][j];
		}
	}
	
	xuat();
	
}



int main() {
    freopen("matran.inp", "r", stdin);
    freopen("max.out", "w", stdout);
    
    
    nhap(); 
    
    int i;
    for(i = 0; i < 10; ++i)
		xuly();


    
    return 0;
}
