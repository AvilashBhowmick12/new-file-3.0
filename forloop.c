#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("your following sequence is\n");
    int i, j=5;
    for (i=0; i<5;i++)
    {
        printf("%d %d\n", i,j);
        j++;
    }

    return 0;
}
