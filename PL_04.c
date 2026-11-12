#include <stdio.h>
int main() {
    float price;
    float total = 0;
    float discount = 0;
    float finalAmount;
    int choice = 1;
    while (choice == 1) {
        printf("Enter the price of item: ");
        scanf("%f", &price);
        total = total + price;
        printf("Do you want to add another item? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    }
    if (total > 10000) {
        discount = total * 0.10;
    }
    finalAmount = total - discount;
    printf("\nTotal price: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final amount: %.2f\n", finalAmount);
}

