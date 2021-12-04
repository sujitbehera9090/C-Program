
#include<stdio.h>

int main(){

    int arr1[] = { 1 , 2 , 3 , 4 , 5 } , arr_length;

    arr_length = sizeof(arr1) / sizeof(arr1[0]);

    for (int i = 0; i < arr_length; i++)
    {

        printf("%d\t" , arr1[i]);

    }

    printf("\n");

    // Array In reverse order 

    for (int i = arr_length - 1; i >= 0; i--)
    {
        printf("%d\t" , arr1[i]);

    }

    printf("%d"  , arr1[0]);
    

    return 0;
    


}