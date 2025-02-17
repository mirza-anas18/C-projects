#include <stdio.h>

int main()
{
    int choice;
    float balance = 1000.00;
    float deposit, withdraw;
    while (1)
    {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("enter your choice:");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("your bank balance is :$%.2f",balance);
        }
        else if (choice == 2)
        {
            printf("enter the amount you want to deposit:$");
            scanf("%f", &deposit);
            printf("your have succesfully deposited:$%.2f\n", deposit);
            if(deposit>0){
                balance=deposit+balance;
                printf("your current bank balance is $%.2f\n",balance);
            }
        }
        else if (choice == 3)
        {
            printf("enter the amount of money:$");
            scanf("%f", &withdraw);
            if (withdraw > 0 && withdraw <= balance)
            {
                balance = balance - withdraw;
                printf("your current bank balance is:$ %.2f", balance);
            }
            else if (withdraw > balance)
            {
                printf("insufficient amount brokie!");
            }
        }
        else if (choice == 4)
        {
            printf("\nThank you for using the ATM. Goodbye!\n");
            break;
        }
        else
        {
            printf("invalid option,please try again!");
        }
    }
    return 0;
}