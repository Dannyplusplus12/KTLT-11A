#include<stdio.h>
int main()
{

	int s; s =0;
	int n;
	int loop; loop = 1;
	while (loop) { 
		scanf("%d",&n);
		if (n != 0)
			s+=n;
		else break;
	}
	printf("%d",s);
	
	scanf("%d");
	return 0;
}

