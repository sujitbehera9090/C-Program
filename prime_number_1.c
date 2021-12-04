

#include<stdio.h>

int main(){

    int num = 8 , counter = 0 , i;

    for ( i = 1; i <= num; i++)
    {
        if ( num % i == 0 )
        {
            counter++;

        }
        
    }

    if ( counter == 2)
    {
        printf("%d is a prime number" , num);

    }

    else{

        printf("%d Number is not a prime number" , num);
    }

    return 0;
 

    
}