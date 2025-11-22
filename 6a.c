#include <stdio.h>
#include <math.h>
float tinhtong(float a, float n){
	float sum = 1;
	for(int i = 0; i < n; i++){
		sum *= (a + i);
	}
	return sum;
}
int main(){
    float a;
	scanf("%f", &a);
	int n;
	scanf("%d", &n);
	if(n < 0 || a < 0){
		printf("gia tri nhap vao a, n khong hop le! ");
	}
	else{
	    printf("%f", tinhtong(a, n));
	}	
return 0;
}		
	

