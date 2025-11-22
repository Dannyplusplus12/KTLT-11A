#include<stdio.h>
#include<conio.h>
#include<math.h>
int b(int a) {
	
	int S = 0;
	printf("a = "); 
	scanf("%d", &a);
	 int n = a * a;
	while(a > 0) {
		S =  S + pow(a%10,3);
		a = a/10;
	}
	return S; 
	} 
	 
int main() { 
	int a;
	int X = b(a); 
	if(X == a*a) {
		printf("binh phuong cua a bang tong cac lap phuong cua cac chu so cua a" ); 
	} 
	else {
		printf("binh phuong cua a khong bang tong cac lap phuong cua cac chu so cua a" ); 
	}
	return 0; 
}
