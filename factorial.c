#include <stdio.h>
#include <stdlib.h>

double factorial( int n)
{
	if(n==1)
		return 1;
	return (n*factorial(n-1));

}


int main( int argc, char **argv)
{
	int n;
	n = atoi(argv[1]);
	printf("%d! = %f\n",n,factorial(n));

	return 0;
}