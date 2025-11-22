#include<stdio.h>
#include<math.h>
int main()
{
	long long n;
	double EPS=1e-6;
	double x,term,sum;
	scanf("%lf",&x);
	n=1;
	sum=1.00;
	term=1.000;
	do
	{
		term*=(x*x)/((2*n-1)*(2*n));
		sum+=term;
		n+=1;
	}
	while (fabs(term)>=EPS);
	printf("%0.6lf",sum);
	return 0;
}
