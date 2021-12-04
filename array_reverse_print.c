
#include<stdio.h>

int main(){

               int array[100] , n , i ;

                               printf("Enter the number of elements: ");
    scanf("%d" , &n);

                                   printf("Enter the elements of array: ");

    for ( i = 0; i < n; i++)

    {

        scanf("%d" , array[i]);

    }

    printf("_________ reverse order is_________");

    for ( i = n - 1; i >= 0; i--)

    {
        
        printf("%d" , array[i]);
    }

    return 0;
    
    
}