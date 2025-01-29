#include<stdio.h>

void check (int n)
{
    if (n > 0)
    {
        printf("%d is an positive number", n);
    }
    else if (n==0)
    {
        printf("%d is zero", n);
    }
    else {
        printf("%d is an negative number", n);
    }
}



int main()
{
    int k;
    printf("enetr the number = ");
    scanf("%d", &k);

    check(k);
    return 0;
}