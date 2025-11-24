#include <stdio.h>
#include <math.h>
float tinhbanhkinh(float a, float b) {
	float c = sqrt(a * a - b * b);
	float p = (a + b + c) / 2;
	float r = sqrt((p - a) * (p - b) * (p - c) / p);
	return r;
}
int main() {
	float a, b;
	scanf("%f%f", &a, &b);
	printf("%f", tinhbanhkinh(a, b));
	return 0;
}
