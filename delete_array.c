
#include<stdio.h>

int main(){

    int array[100] , n , position , i;

    printf("Enter number of elements in array: ");

    scanf("%d" , &n);

    printf("Enter the elements of an array: ");

    for( i = 0; i< n; i++){

        scanf("%d" , &array[i]);

    }

    printf("Enter the location where you want to delete element: ");

    scanf("%d" , &position);

    if ( position >= n)
    {
        printf("Deletion is not possible ");

    }

    else{

        
    }
    
}