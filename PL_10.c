#include <stdio.h>
int main() {
    int shoeprice[5];
    int heighest;
    int lowest;
    int totalPrice = 0;
    float avgprice;
    for (int i = 0; i < 5; i++) {
        printf("Enter price of shoePair %d: ", i + 1);
        scanf("%d", &shoeprice[i]);
    }
    heighest = shoeprice[0];
    lowest = shoeprice[0];
    for (int i = 0; i < 5; i++) {
        totalPrice = totalPrice + shoeprice[i];
        if (shoeprice[i] > heighest) {
            heighest = shoeprice[i];
        }
        if (shoeprice[i] < lowest) {
            lowest = shoeprice[i];
        }
    }
    avgprice = totalPrice / 5;
    printf("\nHeighest price is: %d", heighest);
    printf("\nLowest price is: %d", lowest);
    printf("\nTotal price is: %d", totalPrice);
    printf("\nAverage price is: %.2f", avgprice);
}


