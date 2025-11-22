#include <stdio.h>
#include <math.h>
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
    printf("\nMa tran A: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%4.f", A[i][j]);           
        }
    printf("\n");
    }
}

int main(){
    int n;
    float A[Max][Max], I[Max][Max];
    printf("nhap cap cua ma tran (n x n): ");
    scanf("%d", &n);

Nhapmatran(A, n);
Xuatmatran(A, n);

for(int i=0;i<n;i++){               // Dùng phép khử Gauss-Jordan
    for(int j=0;j<n;j++){
        if(i==j)
            I[i][j]=1;
        else
            I[i][j]=0;
    }    
}

for(int i=0;i<n;i++){
    float pivot = A[i][i];
       if(fabs(pivot) < 1e-6){
          printf("Ma tran A khong kha nghich");
          return 0;
        }

    for(int j=0;j<n;j++){
       A[i][j]=A[i][j] / pivot;
       I[i][j]=I[i][j] / pivot;
    }

    for(int k=0;k<n;k++){
         if(k!=i){
           float factor = A[k][i];
           for(int j=0;j<n;j++){
              A[k][j]=A[k][j]-factor*A[i][j];
              I[k][j]=I[k][j]-factor*I[i][j];
            }
        }    
    }
}
printf("Ma tran nghich dao cua A:\n");
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("%8.3f", I[i][j]);
    }
    printf("\n");
}
       return 0;
}