#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int fib(int n)
{
	if ((n==1)||(n==2))
		return 1;
	return fib(n-1)+fib(n-2);	

}

int main(int argc,char **argv)
{
	FILE *F;
	F = fopen("fib.txt","w+");
	int n,i;
		n=atoi(argv[1]);
	for(i=1;i<n;i++)
		fprintf(F,"%d\t%lf\n",i,(double)log(fib(i)));
	fclose(F);

	return 0;
}