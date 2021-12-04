#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char str1[30];

    char str2[30];

    system("cls");

    printf("\nEnter name : ");

    gets(str1);

    for(int i = 0;i<strlen(str1);i++){

        str2[i] = str1[i];

    }

    puts(str1);

    puts(str2);

    return 0;

}