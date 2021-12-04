
#include<stdio.h>

int main(){

    char ch;

    printf("Enter a alphabet: ");

    scanf("%c" , &ch);

    if(  ch >= 65 && ch <= 90 ){

        printf("%c is a uppercase alphabet." , ch);

    }

    else if( ch >= 97 && ch <= 122 ){

        printf("%c is a lowercase alphabet." , ch);

    }

    return 0;

}