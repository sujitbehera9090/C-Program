
#include<stdio.h>
int main(){

    char ch;
    printf("Enter a character: " );
    scanf("%c" , &ch);
    if((ch >= 'a' && ch <= 'z') || ( ch >= 'A' && ch <= 'Z' )){

    // if((ch >= 65 && ch <= 90) || ( ch >= 97 && ch <= 122 )){

        printf(" %c is a alphabet" , ch);

    }

    else{

        printf(" %c is a not alphabet" , ch);
    }


}