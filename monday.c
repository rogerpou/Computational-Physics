/** sorts ’n’ integer numbers in the array ’a’ in ascending **/
/** order using the mergsort algorithm **/
void mergesort(int n, int *a)
{
int *b,*c; /* two arrays */
int n1, n2; /* sizes of the two arrays */
int t, t1, t2; /* (loop) counters */
if(n<=1) /* at most one element ? */
return; /* nothing to do */
n1 = n/2; n2 = n-n1; /* calculate half sizes */
/* array a is distributed to b,c. Note: one could do it */
/* using one array alone, but yields less clear algorithm */
b = (int *) malloc(n1*sizeof(int));
c = (int *) malloc(n2*sizeof(int));
for(t=0; t<n1; t++) /* copy data */
b[t] = a[t];
for(t=0; t<n2; t++)
c[t] = a[t+n1];
mergesort(n1, b); /* sort two smaller arrays */
mergesort(n2, c);
t1 = 0; t2 = 0; /* assemble solution from subsolutions */
for(t=0; t<n; t++)
if( ((t1<n1)&&(t2<n2)&&(b[t1]<c[t2]))||
(t2==n2))
a[t] = b[t1++];
else
a[t] = c[t2++];
free(b); free(c);
}
