#include<stdio.h>
#include<stdlib.h>

int main()
{
    int maths, science;

    printf("enter marks of maths: ");
    scanf("%d",&maths);
    printf("enter marks of science: ");
    scanf("%d",&science);

    if(maths>=33 && science>=33) {
        printf("YOU WON PRICE OF ₹45 CONGRATULATIONS!\n\a");
    } else if(maths>=33) {
        printf("YOU WON PRICE OF ₹15 CONGRATULATIONS!\n\a");
    } else if(science>=33) {
        printf("YOU WON PRICE OF ₹25 CONGRATULATIONS!\n\a");
    } else if(maths<=33 && science<=33) {
        printf("PADHAI KARLE BHOSDIKE!\n\a");
    }
    return 0;
}