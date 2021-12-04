
#include<stdio.h>

int main(){

    int a = 12 , b = 4 , temp;

    printf("a: %d\nb: %d\n" , a , b );

    printf("_________After Swapping_______\n");

    temp = a;

    a = b;

    b = temp;

    printf("a: %d\nb: %d\n" , a , b);

    return 0;


}