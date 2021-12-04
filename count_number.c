
#include<stdio.h>

int main(){

    int num  , c = 0 ;

    printf("Enter a number: ");

    scanf("%d" , &num);

    while ( num != 0)
    {
        // r = num % 10;

        // printf("%d" , r);

        num = num / 10;

        c++;

    }

    printf("Number of digits: %d" , c);

}