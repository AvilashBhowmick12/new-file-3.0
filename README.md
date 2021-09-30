# new-file-3.0

#include<stdio.h>

int factorial (int number)
{
    if(number == 1 || number == 0)
    {
        return 1;
    }
    else {
        return (number * factorial (number - 1));
      // return (factorial(number));
    }
}
int main(int argc, char const *argv[])
{
    int num;
    printf("ENTER THE NUMBER YOU WANT THE FACTORIAL OF\n");
    scanf("%d", &num);
    printf("the factorial of %d is %d\n", num , factorial(num));
    return 0;
}
