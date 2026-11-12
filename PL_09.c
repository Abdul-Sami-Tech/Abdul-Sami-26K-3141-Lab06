#include <stdio.h>
int main() {
    int units[5];
    int total = 0;
    int highest, lowest;
    float bill;
    float collected = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter units consumed by household %d: ", i + 1);
        scanf("%d", &units[i]);
    }
    highest = units[0];
    lowest = units[0];
    for (int i = 0; i < 5; i++) {
        total = total + units[i];
        if (units[i] > highest) {
            highest = units[i];
        }
        if (units[i] < lowest) {
            lowest = units[i];
        }
        bill = units[i] * 10;
        if (units[i] > 500) {
            bill = bill + (bill * 0.05);
        }
        collected = collected + bill;
    }
    printf("\nTotal units consumed: %d\n", total);
    printf("Highest units: %d\n", highest);
    printf("Lowest units: %d\n", lowest);
    printf("Total amount collected: %.2f\n", collected);
}


