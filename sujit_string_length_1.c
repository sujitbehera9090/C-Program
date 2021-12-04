

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

int main(){

    int length;

    int i = 0;

    int count = 0 , y;

    char name[30];

    system("cls");

    printf("\nEnter your name: ");

    gets(name);

    puts( name );

    // Find length of string by strlen()

    length = strlen( name );

    printf("\n\tLength of string by strlen() function: %d\n" , length);

    // Find length of string by while loop

    while ( name[i] != '\0'){

        i++;

        count++;

    }

    printf("\n\tLength of string by while loop: %d\n" , count);

    y = printf("%s" , name);

    printf("%d" , y);

    return 0;

}

