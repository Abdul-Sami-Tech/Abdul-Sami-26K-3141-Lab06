#include <stdio.h>
int main() {
    int amount = 1;
    int total = 0;
    int count = 0;
    while (amount > 0) {
        printf("Enter recharge amount: ");
        scanf("%d", &amount);
        if (amount > 0) {
            total = total + amount;
            count++;
            if (total > 5000) {
                printf("Recharge Limit Reached\n");
                break;
            }
        }
    }
    printf("Total recharged amount: %d\n", total);
    printf("Number of recharge attempts: %d\n", count);
}