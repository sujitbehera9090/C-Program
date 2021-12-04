

#include<stdio.h>

int main(){

    int num , r , n , original  ;

    printf("\nEnter a number: ");

    scanf("%d" , &num);

    original = num;

    while (num != 0)
    {
        r = num % 10;

        n = n * 10 + r;

        num = num / 10;

    }

    if ( original == n )

    {

        printf("Number is a pallindrome number");

    }

    else{

        printf("Number is not pallindrome");

    }

    return 0;
    
}