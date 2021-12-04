

#include<stdio.h>

int main(){

    int num , r  , a;

    printf("Enter number: ");

    scanf("%d" , &num);

    a = num % 10;

    while ( num != 0)
    {
        r = num % 10;

        num = num / 10;
        
    }

    printf("Sum is : %d" , a + r );

    return 0;

    
    
}