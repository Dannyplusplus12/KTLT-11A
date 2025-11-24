#include <stdio.h>
#include <math.h>

float tinhcanh(float x1, float y1, float x2, float y2) {
	return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

float tinhdientich(float a, float b, float c) {
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
	float x1, y1, x2, y2, x3, y3;
	scanf("%f%f%f%f%f%f", &x1, &y1, &x2, &y2, &x3, &y3);

	float a = tinhcanh(x1, y1, x2, y2);
	float b = tinhcanh(x1, y1, x3, y3);
	float c = tinhcanh(x2, y2, x3, y3);

	float chuvi = a + b + c;
	float dientich = tinhdientich(a, b, c);

	printf("Chu vi tam giac = %f\n", chuvi);
	printf("Dien tich tam giac = %f\n", dientich);


	return 0;
}
