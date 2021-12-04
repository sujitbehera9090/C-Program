
#include<stdio.h>

int main(){

    int arr[100] , n , position , new_value , i;

    printf("Enter the number of elements of an array: ");

    scanf("%d" , &n);

    printf("Enter the elements of an array: ");

    for ( i = 0; i < n; i++)

    {
        scanf("%d" , &arr[i]);

    }

    printf("Enter the position where you want to insert a new value: ");

    scanf("%d" , &position);

    printf("Enter the value to insert: ");

    scanf("%d" , &new_value);

    for (  i = n - 1; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];

    }

    arr[position - 1] = new_value;

    printf("After inserting the new array");

    for ( i = 0; i <= n; i++)
    {
        printf("%d\t" , arr[i]);

    }

    return 0;
    




    
    
}