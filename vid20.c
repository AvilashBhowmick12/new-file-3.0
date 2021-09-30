#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("ENTER THE NUMBER YOU WANT MULTIPLICATION TABEL OF\n");
    scanf("%d", &num);

    printf("MULTIPLICATION TABLE OF %d is as follows\n", num);

    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num*i);
    }
    
    return 0;
}
