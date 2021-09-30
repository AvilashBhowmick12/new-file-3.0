#include <stdio.h>

int main(int argc, char const *argv[])
{
    label:
    printf("we are inside label\n");
   goto end;
    printf("hello world");
    goto label;
    end:
    printf("we are at end\n");

    return 0;
}
