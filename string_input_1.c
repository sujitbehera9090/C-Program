
#include<stdio.h>

#include<stdlib.h>

#include<string.h>

int main(){

    char name1[30] , name2[30];

    system("cls");

    printf("Enter first name: ");

    // scanf("%s\n", &s);
    
    scanf("%[^\n]%*c", &name1);

    printf("Enter second name: ");

    scanf("%[^\n]%*c", &name2);

    printf("%s\n" , name1);

    printf("%s" , name2);

    printf("%d" , strlen(name1));

    return 0;


    
}