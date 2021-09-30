#include <stdio.h>

int main(int argc, char const *argv[])
{
    int age, marks;
    printf("ENTER YOUR AGE\n");
    scanf("%d", &age);

    printf("ENTER YOUR MARKS\n");
    scanf("%d", &marks);

    switch (age)
    {
    case 1:
    printf("the age is 3\n");
    switch (marks)
    {
    case 3:
        printf("your marks is 45\n");
        break;
    
    default:
    printf("your marks is not 45\n");
        break;
    }
    case 2:
    printf("your age is 4\n");
        break;
    
    default:
    printf("your age is not 3,4\n");
        break;
    }
    return 0;
}
