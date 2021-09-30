#include <stdio.h>

int main(int argc, char const *argv[])
{
    char input;
float kmsTOmiles = 0.6213;  //km to miles
float inchTOfoot = 0.0833;  //iches to foot
float poundTOkgs = 0.4535;  //pound to kgs
float inchTOmetr = 0.0254;  //inches to meter
float first,second;

while(1)
{
    printf ("ENTER THE INPUT CHARACTER. Q TO QUIT\n  1. km to miles\n  2. iches to foot\n  3. pound to kgs\n  4. inches to meter\n");
    scanf ("%c", &input);                              //input initialising
    switch (input)
    {
    case 'Q':
    printf("quitting program...\n");
    goto end;
        break;

        case '1':
        printf("enter value\n");   
        scanf("%f", &first);
        second = first * kmsTOmiles ;
        printf("%f km to %f miles\n", first,second);
        break;

        case '2':
        printf("enter value\n");   
        scanf("%f", &first);
        second = first * inchTOfoot ;
        printf("%f inches to %f foot\n", first,second);
        break;

        case '3':
        printf("enter value\n");   
        scanf("%f", &first);
        second = first *  poundTOkgs ;
        printf("%f pound to %f kgs\n", first,second);
        break;

        case '4': 
        printf("enter value\n");   
        scanf("%f", &first);
        second = first *  inchTOmetr;
        printf("%f inches to %f meters\n", first,second);
        break;
    
    default:
    printf("this\n");
        break;
    }
}
end:
    return 0;

}
