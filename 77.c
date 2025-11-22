#include <stdio.h>
#define Max 10

void Nhapmatran(float A[Max][Max], int n){
    printf("Nhap ma tran A (%dx%d):\n", n, n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("A[%d][%d]= ", i, j);
            scanf("%f", &A[i][j]);
        }
    }
}

void Xuatmatran(float A[Max][Max], int n){ 
    printf("Ma tran A:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%4.f", A[i][j]);
        }
    printf("\n");
    }
}

int main(){

    int n;
    float A[Max][Max];
    printf("Nhap cap cua ma tran (n x n): ");
    scanf("%d", &n);

Nhapmatran(A, n);
Xuatmatran(A, n);

    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(A[i][n-1-i] > A[i][j]){
              float temp = A[i][n-1-i];
              A[i][n-1-i] = A[i][j];
              A[i][j] = temp;
           }
        }
    }
    float tong =0;
    for(int i=0;i<n;i++){
        tong += A[i][n-1-i];
    }

    printf("Tong cac phan tu be nhat = %.2f", tong);
return 0;
}
