#include <stdio.h>

int main  () {
    int choice;
    float balance = 0, amount;

    while (1) {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Current Balance: %.2f\n", balance);
                printf("\n");
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                balance += amount;
                printf("\n");
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful.\n");
                } else {
                printf("Insufficiant balance.\n");
                }
                printf("\n");
            break;

            case 4:
                printf("Thank you for using the ATM.\n");
                return 0;    

            default:
            printf("Invalid option. Please choose only 1 to 4.\n");
            printf("\n");
    }
    }
}