
#include<stdio.h>

int main(){

    int sum = 0 ;

    for (int i = 1; i < 11 ; i++)
    {
        if (i % 2 == 0)

        {

            sum = sum + i;

        }
        
    }

    printf("%d" , sum);

    return 0;


    
}