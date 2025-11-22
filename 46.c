#include<stdio.h>
#define bool int
#define true 1
#define false 0
bool kt(int n)
{
	int s=0;
	int i;
	for (i=1;i<n;i++)
	{
		if (n%i==0) s+=i;
}
	return s==n;
}
int main()
{ 
	int n;
	scanf("%d",&n);
	if (kt(n)==true)  printf("true");
	else printf("false");
	return 0;
	
}
