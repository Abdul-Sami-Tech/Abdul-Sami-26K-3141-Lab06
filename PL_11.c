#include <stdio.h>
int main() {
    int units[5];
    float bill;
    float total = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter units consumed by household %d: ", i + 1);
        scanf("%d", &units[i]);
    }
    for (int i = 0; i < 5; i++) {
        bill = units[i] * 10;
        if (units[i] > 500) {
            bill = bill + (bill * 0.05);
        }
        printf("Bill of household %d: %.2f\n", i + 1, bill);
        total = total + bill;
    }
    printf("\nTotal amount collected: %.2f\n", total);
}


