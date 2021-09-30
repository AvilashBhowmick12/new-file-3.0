#include <stdio.h>

int main(int argc, char const *argv[])
{
    int  marks[][4] = {{45,23,2,3},{3,2,3,3,}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("the value of %d is %d ,element of array is %d\n", i,j, marks[i][j]);
        }
        
    }
    
    return 0;
}
