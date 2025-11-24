#include <stdio.h>
int main() {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);

	if( (a <= 0) || (b <= 0) || ( c <= 0) ) {
		printf("Day khong phai la 1 tam giac\n");
	}
	else if ((a + b > c) && (a + c > b) && (b + c > a)) {
		printf("Day la 1 tam giac 3 canh!\n");

		if (a == b && b == c) {
			printf("Day la 1 tam giac deu\n");
		}
		else if ((a == b && a*a + b*b == c*c) ||
		         (a == c && a*a + c*c == b*b) ||
		         (b == c && b*b + c*c == a*a)) {
			printf("Day la 1 tam giac vuong can\n");
		}
		else if ((a*a == b*b + c*c) || 
		         (b*b == a*a + c*c) || 
		         (c*c == a*a + b*b)) {
			printf("Day la 1 tam giac vuong\n");
		}
		else if ((a == b) || (b == c) || (a == c)) {
			printf("Day la 1 tam giac can\n");
		}
		else {
			printf("Day la 1 tam giac binh thuong\n");
		}
	} 
	else {
		printf("Day khong phai la 1 tam giac\n");
	}
		  	  	
	return 0;
}
