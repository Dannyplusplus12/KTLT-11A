#include <stdio.h>
int main(){
    int n, m;

    printf("nhap so phan tu A: ");   
    scanf("%d", &n);
    printf("\nnhap so phan tu B: ");
    scanf("%d", &m);
    int A[100];

    for(int i=0;i<n;i++){
       printf("A[%d]= ", i);
       scanf("%d", &A[i]);
    }
    printf("Mang A: ");
    
    for(int i=0;i<n;i++){
        printf("%d ", A[i]);
    }
    
    int B[200];
    for(int i=0;i<m;i++){
       printf("B[%d]= ", i);
       scanf("%d", &B[i]);
    }
    printf("Mang B: ");
    for(int i=0;i<m;i++){
        printf("%d ", B[i]);
    }

    for(int i=0;i<n;i++){
        B[m+i]=A[i];                
    }
        m=m+n;
    
    for(int i=0;i<m-1;i++){
       for(int j =i+1;j<m;j++){
           if(B[i]<B[j]){
              int temp = B[i];
              B[i]=B[j];
                B[j]=temp;
            }
        }
    }
 
printf("Mang sau khi noi va sap xep: ");
    for(int i=0;i<m;i++){
        printf("%d ", B[i]);
    }
return 0;}