
#include<stdio.h>
#include<Stdlib.h>
int main(){

    int a[] = { 10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , 100 };

    int *p;

    p = a;

    system("cls");

    for(int i = 0;i<10;i++){

        printf("a[%d]: %d\t" , i , a[i]);
    }

    printf("\nadress of array: %d\n" , a );

    printf("adress of array a[0]: %d\n" , &a[0] );

    printf("*p: %d\n" , *p); // 10 

    printf("a[0]: %d\n" , a[0]); // 10

    p++;

    printf("*p: %d\n" , *p); // 20

    printf("*p++: %d\n" , *p++ ); // 20

    printf("*(p++): %d\n" , *(p++)); //30

    printf("*++p: %d" , *++p); //50

    // printf("")

}