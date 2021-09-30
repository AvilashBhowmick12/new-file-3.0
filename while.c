#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num, index = 0;
    printf("ENTER A NUMBER\n");
    scanf("%d" , &num);
    while (index < num)
    {
    printf(" %d\n" , index + 1 );
    index = index +1; 

    }

    return 0;
}
