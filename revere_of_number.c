
#include<stdio.h>

int main(){

    int  num  , rev = 0 , n ;

    printf("\nEnter a number: ");

    scanf("%d" , &num);

    while ( num!= 0)

    {

        // n = num % 10;

        rev = rev * 10 + ( num % 10 );

        num = num/10;


    }

    printf("Reverse is %d" ,  rev);
    
    return 0;

}