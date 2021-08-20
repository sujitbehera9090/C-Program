#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char str1[] = "Sujit";

    char str2[10];

    system("cls");

    for(int i = 0;i<strlen(str1);i++){

        str2[i] = str1[i];

    }

    printf("%s" , str1);

    printf("%s\n" , str2);

    return 0;

}