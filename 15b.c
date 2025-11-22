#include <stdio.h>
#include <math.h>
float tinhcanh(float x1, float y1, float x2, float y2, float x3, float y3){
	float a = sqrt( (x3-x2)*(x3-x2)+ (y3-y2)*(y3-y2));
	float b = sqrt( (x3-x1)*(x3-x1)+ (y3-y1)*(y3-y1));
	float c = sqrt( (x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1));
	printf("canh AB = %f\n", a);
	printf("canh AC = %f\n", b);
	printf("canh BC = %f\n", c);
	float chuvi = (a+b+c)/2;
	return chuvi;
}
int main(){
	float x1, y1, x2, y2, x3, y3; 
	scanf("%f", &x1);
	scanf("%f", &y1);
	scanf("%f", &x2);
	scanf("%f", &y2);
	scanf("%f", &x3);
	scanf("%f", &y3);
    float giatricantim = tinhchuvi(x1, y1, x2, y2, x3, y3);
    printf("chu vi tam giac = %f", giatricantim);
	return 0;
}	
