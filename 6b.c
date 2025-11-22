#include <stdio.h>
#include <math.h>
float tinhtong(float a, float n){
	float sum = 1;
	float d = 1;
	for(int i = 0; i <= n; i++){
		d *=  (a +i);
		sum += 1 / d;	 
	}
		
	return sum;
}


int main(){
    float a;
	scanf("%f", &a);
	int n;
	scanf("%d", &n);
	if(n < 0 || a < 0){
		printf("gia tri nhap vao a, n khong hop le!\n ");
	}
	else{
	    printf("%f", tinhtong(a, n));
	}	
return 0;
}		
	
