#include <stdio.h>

float tich(float a, int n) {
	float res = 1;
	int i;
	for(i = 0; i < n; i++) {
		res *= (a + i);
	}
	return res;
}

float tong(float a, int n) {
	float sum = 0;
	float mul = 1;
	int i;
	for(i = 0; i <= n; i++) {
		mul *= (a + i);
		sum += 1 / mul;
	}
	return sum;
}

int main() {
	float a;
	int n;
	scanf("%f%d", &a, &n);
	if(n < 0 || a < 0) {
		printf("gia tri nhap vao a, n khong hop le!");
	} else {
		printf("Tich = %f\n", tich(a, n));
		printf("Tong = %f\n", tong(a, n));
	}
	
	return 0;
}
