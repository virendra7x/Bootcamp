/////// factorial
#include <stdio.h>

int fact ( int n)
{
    if (n== 0 || n== 1)     
    return 1;

    int re = n * fact ( n-1);
    return re;
}

//// fibonacci series

void fibo(int a, int b, int n) {
    if (n <= 0) return;
    printf("%d ", a);
    fibo(b, a + b, n - 1);
}

//// reverse natural number
void prn(int n)
{
if (n<1)
    return;
   
    printf("%d ",n);
    prn ( n-1);
}

/// print natural number in series
void pn(int j, int c)
{
    if (c>j)
    return;
   
    printf("%d ",c);
    pn(j, c+1);
}

//// Count
int count (int n )
{
    int count =0;
    while (n>0)
    {
        n=n/10;
    
        count++;
    }
    printf("%d",count);
    return count;
}

int main()
{
    int k, result;
    printf("enter the number= ");
    scanf("%d", &k);
    
    printf("%d", fact(k));            printf("\n");
    fibo(0,1,k);                      printf("\n");
    prn(k);                           printf("\n");
    pn(k,1);                          printf("\n");
    count(k);                         printf("\n");
    





    return 0;
}

