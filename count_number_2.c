

#include<stdio.h>

int main(){

    int num , c;

    printf("Enter a number: ");

    scanf("%d" , &num);

    c = printf( "%d" , num);

    printf("\n%d" , c);

}