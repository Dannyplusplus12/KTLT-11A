#include <stdio.h>


float bankinh(float a, float b, float c){
	float d = (a+ b -c)/2;
	return d;
}



int main(){
	float a, b, c;
	printf("nhap do dai canh huyen a = ");
	scanf("%f", &a);
	printf("nhap do dai canh goc vuong b = ");
	scanf("%f", &b);
	printf("nhap do dai canh goc vuong c = ");
	scanf("%f", &c);
    float giatricantim = bankinh(a, b, c);
    printf("ban kinh duong tron noi tiep tam giac la:%f", giatricantim);
    return 0;
}    
    

