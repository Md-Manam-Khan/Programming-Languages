#include <stdio.h>
int main()
{
    int choice;
    float balance = 10000, amount;
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("Choose an option: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        {
            printf("Current balance: %.2f", balance);
            break;
        }
        case 2:
        {
            printf("Input deposit amount: ");
            scanf("%f", &amount);
            if(amount > 0)
            {
                balance = balance + amount;
                printf("Deposit successful\n");
                printf("Current balance: %.2f", balance);
            }
            else
            {
                printf("Invalid amount");
            }
            break;
        }
        case 3:
        {
            printf("Input withdrawal amount: ");
            scanf("%f", &amount);
            if(amount <= 0)
            {
                printf("Invalid amount");
            }
            else if(amount > balance)
            {
                printf("Insufficient balance");
            }
            else
            {
                balance = balance - amount;
                printf("Withdrawal successful\n");
                printf("Current balance: %.2f", balance);
            }
            break;
        }  
        case 4:
        {
            printf("Thank you for using the ATM");
            break;
        }
        default:
        {
            printf("Invalid choice");
        }    
    }
    return 0;
}