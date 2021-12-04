
#include<stdio.h>

#include<stdlib.h>

int main(){

    int a[] = { 10 , 11 , -1 , 56 , 67 , 5 , 4 };

    system("cls");

    for(int i = 0;i<7;i++){

        printf("a[%d] : %u = %d\t" , i , &a[i] , a[i]);
    }

    int *p , *q;

    p = a;

    q = &a[0] + 3;

    printf("%d  %d   %d\n" , ( *p )++ , (*p)++ , *(++p));

    printf("*p: %d p: %u\n" , *p , &(*p));

    printf("(*p)++: %d p: %u\n" , (*p)++ , &(*p ));

    q--;

    printf("(*(q + 2))--: %d\n q: %u\n" , (*(q + 2))--);

    printf("*(p + 2 ) - 2: %d\n p: %u\n" , *(p + 2 ) - 2 , &(*p));

    printf("*(p++ - 2) - 1: %d\n p: %u" , *(p++ - 2) - 1 , &(*p));

    return 0;






}