
#include<stdio.h>

int main(){

    int num , a = 0 , b = 1 , temp ;

    printf("Enter a number: ");

    scanf("%d" , &num);

    for (int i = 1; i <= num; i++)
    {

        printf("%d\n" , a);

        temp = a + b;

        a = b;

        b = temp;

    }

    return 0;
    


}