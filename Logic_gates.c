#include <stdio.h>
int main ()
{
    int a,b,fun;
    printf("To calculate logic gate AND type 1 \n To calculate logic gate OR type 2 \n To calculate logic gate NOT type 3 \n\n\n Yeah type here:");
    scanf("%d",&fun);

    switch(fun)
    {
        case (1):
        {
            printf("Input A is :\n");
            scanf("%d",&a);
            printf("\nAnd your Input B is:\n");
            scanf("%d",&b);
            printf("\n--------------------------------------------");
            printf("\nThe output of logic gate AND is :%d",a&&b);
            printf("\n--------------------------------------------");
            break;

        }
        case (2):
        {

            printf("Input A is :\n");
            scanf("%d",&a);
            printf("\nAnd your Input B is:\n");
            scanf("%d",&b);
            printf("\n--------------------------------------------");
            printf("\nThe output of logic gate AND is :%d",a||b);
            printf("\n--------------------------------------------");
            break;
        }
        case (3):
        {
            printf("Input A is :\n");
            scanf("%d",&a);
            printf("\nAnd your Input B is:\n");
            scanf("%d",&b);
            printf("\n--------------------------------------------");
            printf("\nThe output of logic gate AND is :%d",a!=b);
            printf("\n--------------------------------------------");
            break;
        }
        default:
        {
            printf("Invalid Input \n\n\n\n --------------------------------------------\nTo calculate logic gate AND type '1' \n To calculate logic gate OR type '2' \n To calculate logic gate NOT type '3' \n--------------------------------------------");
        }
    }
    return 0;
}