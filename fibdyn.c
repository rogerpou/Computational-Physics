/** calculates Fibonacci number of ’n’ dynamically **/
double fib_dynamic(int n)
{
	double *fib, result;
	int t;
	if(n<=2) /* simple case ? */
		return(1); /* return result directly */
	fib = (double *) malloc(n*sizeof(double));
	fib[1] = 1.0; /* initialise known results */
	fib[2] = 1.0;
	for(t=3; t<n; t++) /* calculate intermediate results */
		fib[t]=fib[t-1]+fib[t-2];
	result = fib[n-1]+fib[n-2];
	free(fib);
	return(result);
}