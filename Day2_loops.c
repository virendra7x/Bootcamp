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

void largenum(int a, int b, int c){
    int result = a>b&&a>c ? a : (b>c ? b:c) ;
    printf("%d", result);
}

void leapyear (int n ){
    if (( n % 4 == 0 && n % 100 != 0)|| n % 400 ==0)
    {
        printf ("its is an leap year");
    }
    else {
        printf(" its not an leap year");
    }
}

int main()
{
    int k;
    printf("enetr the number = ");
    scanf("%d", &k);

    //check(k);
    //largenum(4,1,10);
    leapyear(k);


    return 0;
}