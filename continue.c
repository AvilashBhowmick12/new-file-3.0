#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("hello world\n");
    int i, age;
    for (i=0;i<10;i++)
    {
        printf("%d\n ENTER YOUR AGE\n", i);
        scanf("%d", &age);
       // if (age>10)
        //{
         //   printf("number greater than ten hence break\n");
           // break;
       // }
    }
    return 0;
}
