#include<stdio.h>
#include<stdlib.h>

int main()
{

    int x;
    int y;
    char z;

    printf(" enter the number :");
    scanf("%d",&x);

    printf(" enter the number:\n");
    scanf("%d",&y);
   
   
    printf(" enter the operation :\n");
    scanf(" %c",&z);

    switch (z) {
    case '+':
        printf("sum : %d\a",x+y);
        break;
    case '-':
        printf("sub : %d\a",x-y);
        break;
    case '*':
        printf("product : %d\a",x*y);
        break;
    case '/':
        printf("division : %d\a",x/y);
        break;
    default:
        printf("null\a");
    }

    return 0;
}
