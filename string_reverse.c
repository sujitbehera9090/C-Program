
#include<stdio.h>

int main(){

    char str1[30] ,  ch;

    int str_length = 0 , i = 0;

    printf("Enter a string: ");

    gets( str1 );

    while ( str1[i] != '\0')
    {

        str_length++;
        i++;
        
    }

    for (int i = 0; i < str_length / 2; i++)
    {

        ch = str1[i];

        str1[i] = str1[ str_length - 1 -i ];

        str1[ str_length - 1 - i] = ch;
        
    }

    puts( str1 );

    printf("\n%d" , str_length);

    return 0;

    

    
}