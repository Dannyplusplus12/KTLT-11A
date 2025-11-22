#include <stdio.h>
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if ( (a + b > c) && (a +c > b) && (b + c > a) ){
		printf("day là 1 tam giac 3 canh!\n");
	
		  if ( (a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b) ){
		     printf("day la 1 tam giac vuong");
        	}
		  else if ( a == b == c){
		  	printf("day la 1 tam giac deu");
		  	}
		  else if ( (a == b) || (b == c) || (a == c) )	{
		  	printf("day la 1 tam giac can");
		  	}
		  else if ( (a == b && a*a + b*b == c*c) && (a == c && a*a + c*c == b*b) && (b == c && b*b + c*c == a*a) ){
		    printf("day la 1 tam giac tam giac vuong can");
			}	
		  else{
		  printf("day la 1 tam giac binh thuong");
		  	}
	}
	 else{
	 	printf("day khong phai la 1 tam giac");
	 }		  	  	
	return 0;
	} 
	
