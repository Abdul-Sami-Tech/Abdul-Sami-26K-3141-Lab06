#include <stdio.h>
int main() {
    int shoeprice[5];
    int totalPrice = 0;
    float avgprice;
    for (int i = 0; i < 5; i++) {
        printf("Enter price of shoe %d: ", i + 1);
        scanf("%d", &shoeprice[i]);
    }
    for (int i = 0; i < 5; i++) {
        totalPrice = totalPrice + shoeprice[i];
    }
    avgprice = (float)totalPrice / 5;
    printf("\nTotal price is: %d", totalPrice);
    printf("\nAverage price is: %.2f", avgprice);
}


