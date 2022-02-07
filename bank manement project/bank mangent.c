#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int multi (float x , float y);
float divi (float a , float b) ;
void exchange ();

int main ()
{
    int input = 0 , input2 = 0 ;
    char sing_username[20];
    int sing_phone_number   ;
    int sing_password  ;
    int log_password ;
    char log_username[20] ;
    static int add_money = 0 , withdraw_money = 0 , all_money = 0 , current_money = 0 ;


    while (input != 4)
    {

    printf("\n ___________ Welcome To Bank __________\n");
    printf("\n");
    printf("    Press 1 to go Sign Up \n");
    printf("    Press 2 to Login \n");
    printf("    Press 3 to Exchange Money \n");
    printf("    Press 4 to Exit \n");
    printf("\n");
    printf("________ Security is Bank Life ___________\n");
    printf("\n");

    printf("Choose the Option : ");
    scanf ("%d",&input);
    printf("\n");

    if (input == 1)
    {

        printf("Phone Number : ");
        scanf("%d",&sing_phone_number);

        printf("User name : ");
        scanf("%s",&sing_username);

        printf("Password (only inter are allow ) :");
        scanf("%d",&sing_password);

        printf("\n Sing in successful ...... \n");

        printf("\n");

    }
    //input == 2 start
    else if (input == 2)
    {
        printf ("User name :");
        scanf("%s",&log_username);

        printf("Password :");
        scanf("%d",&log_password);

        if (strcmp(log_username,sing_username)== 0 && log_password == sing_password)
        {
            printf("\n Login Successful .....\n \n");

            // input2 start

            while (input2 != 3){

            printf("   Press 1 to Add money  \n");
            printf("    Press 2 to Withdraw money \n");
            printf("    Press 3 to Exit \n \n ");

            printf("Choose the Option :");
            scanf("%d",&input2);
            printf("\n");


            if (input2 == 1 )
            {
                printf("Enter the amount you want to add in bank :");
                scanf("%d",&add_money);
                printf("\n Money Add Successful ...... \n \n ") ;
                all_money = add_money + all_money ;
                printf("All of your money in bank is now %d \n ",all_money);
                printf("_____________________________________ \n \n ");
            }
            else if (input2 == 2)
            {

                printf("Your All money is %d \n \n ", all_money);
                printf("Enter the amount you want to withdraw :");
                scanf("%d",&withdraw_money);
                current_money =  all_money ;

                if (withdraw_money >  current_money)
                {
                    printf("You cannot withdraw !!! \n");
                    printf("Your current money is %d \n ",current_money);

                } else
                 {
                     printf("\n You withdraw %d money \n ",withdraw_money);
                     current_money = all_money - withdraw_money ;
                     printf("Now your current money is : %d \n",current_money );
                     all_money = current_money ;
                     printf("_____________________________________ \n \n ");
                     printf("\n Thank for Trusting Bank ..... \n");
                     printf("_____________________________________ \n \n ");
                 }

            }

            //input2 ==2 statement end

            else if (input2 == 3)
            {
                printf("\n Thank for Trusting Bank ..... \n");
            }
            else {

                printf ("Something Wrong ...... \n");
            }


            }
        }
        else {

            printf("\n Wrong username or password ....\n");
        }

    }
    //input2 end
    else if (input == 3 )
    {
        exchange();

    }
    else if (input == 4)
    {
        printf("Exiting........... \n \n");
    }
    else {

    printf("Wrong input use only integer (1,2,3,4) \n \n");

    }


    }




    return 0 ;
}

void exchange ()
{
    int input3 = 0 ;
    float exc = 0 ;
    float money = 0.0 ;
    float USD =0 , MM = 0 , Yuan = 0 ;
    while (input3 != 7)
    {

        printf("\n ________ Exchange ________ \n\n");
        printf("Press 1 to Exchange USD to MM Kyat \n");
        printf("Press 2 to Exchange MM Kyat to USD \n");
        printf("Press 3 to MM Kyat to Yuan \n");
        printf("Press 4 to Yuan to MM Kyat \n");
        printf("Press 5 to USD to Yuan \n");
        printf("Press 6 to Yuan to USD \n");
        printf("Press 7 to Exit \n");
        printf("\n");
        printf("Choose the Options :");
        scanf("%d",&input3);


        if (input3 == 1)
        {
            printf("\n Enter Now USD price :");
            scanf("%f",&exc);

            printf("Enter the amount of USD you want to Exchange :");
            scanf("%f",&USD);

            money = multi(USD,exc);
            printf("Your Myanmar money is %f\n",money);
        }
        else if (input3 == 2)
        {
            printf("\nEnter Now USD price :");
            scanf("%f",&exc);

            printf("Enter the amount of MM Kyats you want to Exchange :");
            scanf("%f",&MM);

            money = divi(MM , exc);
            printf("Your USD dollar is : %f \n",money);

        }
        else if (input3 == 3)
        {
            printf("\n Enter Now Yuan price :");
            scanf("%f",&Yuan);

            printf("Enter the amount of MM Kyats you want to Exchange :");
            printf("%f",&MM);

            money = divi (MM,Yuan);
            printf("Your Yuan is : %f \n",money);
        }
        else if (input3 == 4)
        {
            printf("\n Enter Now Yuan price :");
            scanf("%f",&Yuan);

            printf("Enter the amount of Yuan you want to Exchange :");
            printf("%f",&MM);

            money = multi (MM,Yuan);
            printf("Your Myanmar money  is : %f\n",money);
        }
        else if (input3 == 5)
        {
            printf("\n Enter Now 1 Yuan price is equal to 1 USD: ");
            scanf("%f",&Yuan);

            printf("Enter the amount of USD you want to Exchange :");
            scanf("%f",&USD);

            money = multi(USD,Yuan);
            printf("Your Yuan is : %f \n",money);
        }
        else if (input3 == 6)
        {
            printf("\n Enter Now 1USD price is equal to 1 Yuan : ");
            scanf("%f",&USD);

            printf("Enter the amount of Yuan you want to Exchange :");
            scanf("%f",&Yuan);

            money = multi(Yuan,USD);
            printf("Your USD dollar is : %f \n",money);
        }
        else if (input3 == 7)
        {
            printf("Exiting........... \n \n");
        }
        else {
            printf("Something Wrong !!! \n \n");
        }


    }

}

int multi (float x , float y)
{
    return x * y ;
}

float divi (float a , float b)
{
    return a / b ;
}



