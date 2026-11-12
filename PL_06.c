#include <stdio.h>
int main() {
    int pin;
    int attempts = 0;
    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &pin);
        if (pin == 1234) {
            printf("Login Successful\n");
            break;
        }
        attempts++;
        printf("Incorrect PIN. Remaining attempts: %d\n", 3 - attempts);
    }
    if (attempts == 3) {
        printf("Account Locked\n");
    }
}

