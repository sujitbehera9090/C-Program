

#include<stdio.h>

int main(){

    int num , r , armstrong = 0 , n;

    printf("\nEnter a number: ");

    scanf("%d" , &num);

    n = num;

    while ( num != 0)
    {


        r = num % 10;

        armstrong = armstrong + ( r * r * r );

        num = num/10;

        
    }

    if ( n == armstrong)
    {
        printf("%d is a armstrong number" , n);

    }

    else{

        printf("%d is not a armstrong number" , n);

    }

    return 0;
    
    


}