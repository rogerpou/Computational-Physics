
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

double fast_power(double a, int n)
{	
	double aux;
	if(n<0)
		return 1/(fast_power(a,-n));
	if(n==0)
		return 1;
	if(n==1)
		return a;
	if((n%2==0))
		{
			if(n==2)
			{
				
				return a*a;
				
			}

				
			aux = fast_power(a,n/2);
			return aux*aux;
		}
			
	if (n%2==1)
		{
			
			aux = fast_power(a,(n-1)/2);
			return aux*aux*a;
			
		}	
	return 0;
	
	
}

int main(int argc, char **argv)
{
	int n;
	double a;
	a =atoi(argv[1]);
	n =atoi(argv[2]);

	printf("(%lf)^(%d)=%lf",a,n,fast_power(a,n));
	return 0;

}