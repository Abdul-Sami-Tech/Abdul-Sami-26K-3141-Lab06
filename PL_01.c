#include <stdio.h>
int main() {
    int amount = 1;
    int balance = 50000;
    int count = 0;
    while (amount > 0) {
        printf("Enter the amount you have to withdraw: ");
        scanf("%d", &amount);
        if (amount > 0) {
            balance = balance - amount;
            count++;
        }
    }
    printf("The remaining balance is: %d\n", balance);
    printf("No. of withdrawals are: %d\n", count);
}


