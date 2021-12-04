
#include<stdio.h>

int main(){

    int num , r , even = 0 , odd = 0;

    printf("Enter a number : ");

    scanf("%d" , &num);

    while ( num != 0)
    {
        r = num % 10;

        if( r % 2 == 0){

            even = even + r;

        }

        else{

            odd = odd + r;

        }

        num = num / 10;

    }

    printf("Sum of even numbers: %d" , even);

    printf("Sum of odd numbers %d" , odd);

    return 0;
    
}