#include <stdio.h>
int main(){
	int n, i;
	int f0 = 1, f1 = 1, fn;
	scanf("%d", &n);
	if(n > 0){
		printf("%d ", f0);
	}
	if(n > 1){
		printf("%d ", f1);
	}
	fn = f0 + f1;
	while(fn < n){
		printf("%d ", fn);
		f0 = f1;
		f1 = fn;
		fn = f0 + f1;
	}	
	return 0;
}	   
