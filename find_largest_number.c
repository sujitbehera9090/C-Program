
#include<stdio.h>

int main(){

    int num , r , s = 0;

    printf("\nEnter a number " , num);

    scanf("%d" , &num);

    while ( num != 0)
    {
        r = num % 10;

        if( r > s){

            s = r;

        }

        num = num / 10;

    }

    printf("Largest number is : %d" , s);

    return 0;
    
}