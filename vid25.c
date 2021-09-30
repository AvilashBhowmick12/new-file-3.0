#include <stdio.h>

int fib_recursive(int n)
{
    if(n==1 || n==2)
    {
    return n-1;
}
else {
    return fib_recursive(n-1) + fib_recursive(n-2);
}
}

int fib_iterative(int n)
{
    int a=0;
    int b=1;

    for( int i=0;i<n-1;i++)
    {
        b= a+b;    //iteration 1
        a=b -a;    //iteration 1
    }
    return a;
}

int main()
{
    int number;
    printf("enter the index to find fibonaceae series\n");
    scanf("%d", &number);
    printf("the value of fibonaceae number at position %d using iterartive approachis %d\n",number, fib_iterative(number));
    printf("the value of fibonaceae number at position %d using iterartive approachis %d\n",number, fib_recursive(number));
    return 0;
}