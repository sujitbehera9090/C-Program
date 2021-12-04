

#include<stdio.h>

int main(){

    char name1[30] , name_copy[30];

    int str_length = 0 , i = 0;

    printf("Enter the name: ");

    scanf("%[^\n]%*c", &name1);

    while( name1[i] != '\0'){

        str_length++;
        i++;

    }

    for( i = 0;i<str_length; i++){

        name_copy[i] = name1[i];

    }

    printf("NAme1: %s\n" , name1);

    printf("Lenghth : %d" , str_length);

    printf("copy : %s" , name_copy);

    str_length = 0 , i = 0;

    while( name_copy[i] != '\0'){

        str_length++;

        i++;


    }

    printf("Lenghthffff : %d" , str_length);

    return 0;


}