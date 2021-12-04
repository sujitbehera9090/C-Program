


#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   char name1[30] , name_copy[30] , ch;
   
   int str_length = 0 , i = 0;

   system("cls");
   
   printf("Enter the value of name1: ");
   
   scanf("%[^\n]%*c", &name1);


//    Length of string 


   
   while( name1[i] != '\0'){
       
       str_length++;
       i++;
   }



//    Copy of string 


   
   for( i = 0 ;i < str_length ; i++){
       
       name_copy[i] = name1[i];
       
   }



//    Reverse of string 


   
   for( i = 0 ; i < str_length / 2; i++){
       
       ch = name1[i];
       
       name1[i] = name1[ str_length - 1 -i ];

       name1[ str_length - 1 - i] = ch;
       
   }


//    Cheavking pallindrome or not 


   
   if( strcmp( name1,name_copy) == 0){
       
       printf("String a pallindrome");
       
   }
   
   else{
       
       printf("String is not pallindrome");
       
   }
   

   
//    printf("\nName: %s\n" , name1);
   
//    printf(" Name copy: %s" , name_copy);
   
//     printf(" Name copy length: %d" , strlen(name_copy));
    
//    printf("Name length: %d" , strlen(name_copy));


   

    return 0;
}
