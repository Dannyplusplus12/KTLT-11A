#include<math.h>
#include <stdio.h>
void cau_a(float a,int n){
	float s;
	s=pow(a,n);
	printf("a mu n bang: %f\n",s);
	}
void cau_b(float a,int n){
	int i;
	float t,s=1;
	for(i=0;i<n;i++){
		t=a+i;
		s=s*t;
	}
	printf("\cau b la :%f\n",s);
}
void cau_c(float a, int n){
	int i;
	float s=0,t=1;
	for(i=0;i<n+1;i++){
		t=t*(a+i);
		s+=(1/t);
	} printf("\cau c la: %f\n",s);
}
int main(){
	int n;
	float a;
	printf("nhap a: ");
	scanf("%f",&a);
	printf("\nhap n: ");
	scanf("%d",&n);
	cau_a(a,n);
	cau_b(a,n);
	cau_c(a,n);
	return 0;
	} 
