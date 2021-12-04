
#include<stdio.h>

#include<stdlib.h>

#include<string.h>

int main(){

    int chance = 3;

    int balance = 5000;

    int withdrawl_amount;

    char pin[] = "1234";

    char restart[] = "Yes";

    char account_number[15];

    // int pin= 1234;

    // int option = 0;

    char option[10];

    system("cls");

    printf("\nWelcome to SBI bank Atm\n");

    printf("\nYou have %d chances\n" , chance);

    while (chance > 0)

    {

        // while (restart == "Yes")

        // {

        char input[10];

        printf("\nplz... Enter 4 digit pin: ");

        gets(input);

        if (strcmp(input,pin) == 0)

        // if (input == pin)

        {

            printf("\nYour pin is correct");

            printf("\npress 1 for cheack balance\n");

            printf("\npress 2 for withdrawl\n");

            printf("\npress 3 for make a deposit\n");

            printf("press 4 to make a transaction");

            printf("\nplz... choose any option: ");

            gets(option);


            // Balance Cheaking 


            if (strcmp(option,"1") == 0)

            {

                printf("\nYour balance is: %d" , balance);

            }


            // Withdral Balance 


            else if (strcmp(option,"2") == 0)

            {

                

                printf("\nHow many amounts you want to withdrawl: ");

                scanf("%d" , &withdrawl_amount);

                if (balance - withdrawl_amount >= 0 && withdrawl_amount < balance)

                {

                    balance = balance - withdrawl_amount;

                    printf("BAlance is: %d" , balance);
                      
                }

                else 

                {

                    printf("\nInsufficient amount\n");

                }

                withdrawl_amount = 0;

            }


            // Deposit Section



            else if ( strcmp(option,"3") == 0) 

            {

                printf("\nEnter the amount for deposit\n");

                int amount_deposit;

                scanf("%d" , &amount_deposit);

                balance = balance + amount_deposit;

                printf("Your Balance is now : %d" , balance);
                
                
            }


            // Make a transaction

            

            else if ( strcmp(option,"4") == 0) 

            {

                printf("To make a transaction enter a account number: ");

                gets(account_number);

                printf("Enter a amount: ");

                scanf("%d" , &withdrawl_amount);

                if (balance - withdrawl_amount >= 0 && withdrawl_amount < balance)

                {

                    balance = balance - withdrawl_amount;

                    printf("%d successfully transfered to %s\n" , withdrawl_amount , account_number );

                    printf(" Your BAlance is now: %d" , balance);
                      
                }

                else 

                {

                    printf("\nInsufficient amount\n");

                }






                withdrawl_amount = 0;


            }
            

            else

            {

                printf("Please enter a correct option");

            }
        
   
        }

        else

        {
            chance = chance - 1;

            if (chance > 0)

            {

                printf("\nplz... enter a correct pin\n");

                printf("\nYou hava %d chances\n" , chance);

            }
 
            if ( chance == 0)

            {
                printf("\nIncorect pin\n");

                printf("\nSorry! you hava no chances");

                break;

            }

            continue;
            
        }
        
    }

    return 0;
       
}

// sujit_ATM.c