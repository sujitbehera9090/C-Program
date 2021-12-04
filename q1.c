
#include<stdio.h>

#include<string.h>

int main(){

    int x;

    for(x = -1;x<=10;x++){

        if ( x < 5 )

        {

            printf("\n%d" , x);

            continue;

        }

        else

        {

            break;

        }

        printf("abc");
        
    }
}