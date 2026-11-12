#include <stdio.h>
int main() {
    float prices[5];
    float total = 0;
    float discount = 0;
    float finalAmount;
    for (int i = 0; i < 5; i++) {
        printf("Enter price of product %d: ", i + 1);
        scanf("%f", &prices[i]);
    }
    for (int i = 0; i < 5; i++) {
        total = total + prices[i];
    }
    if (total > 10000) {
        discount = total * 0.10;
    }
    finalAmount = total - discount;
    printf("\nOriginal Total: %.2f\n", total);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount: %.2f\n", finalAmount);
}


