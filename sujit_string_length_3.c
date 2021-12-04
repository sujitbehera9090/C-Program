
#include<stdio.h>

#include<stdlib.h>

#include<string.h>

int main(){

    char name1[] = "Sujit Kumar Behera";

    system("cls");

    puts(name1);

    printf("Length of name1 is : %d\n" , strlen(name1));

    printf("\n%s" , name1 + 3);

    printf("\n%d\n" , strlen( name1 + 3));


}

// sujit_string_length_3.c