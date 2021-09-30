#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("lets learn about pointers\n");
    int a = 8;
    int* ptra = &a; 
    printf("the address of pointer to a is %p\n", &ptra);
     printf("the value of a is %p\n", ptra);
      printf("the value of a is %d\n", &ptra);
    printf("the value of a is %p\n", &ptra);
    return 0;
}
