
#include<stdio.h>

int main(){

    int arr1[] = { 12 , 34 , 67 , 45 , 89 };

    int len = sizeof(arr1) / sizeof(arr1[0]);

    int temp;

    for ( int i = 0; i < len / 2 ; i++)
    {
        temp = arr1[i] ;

        arr1[i] = arr1[ len - 1 - i];

        arr1[ len - 1 - i ] = temp;


    }

    for (int i = 0; i < len; i++)

    {
        printf("%d \t" , arr1[i]);

    }

    return 0;
    
    
}