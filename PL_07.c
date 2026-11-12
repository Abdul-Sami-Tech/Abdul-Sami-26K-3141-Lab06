#include <stdio.h>
int main() {
    int marks[5];
    int total = 0;
    int highest, lowest;
    float average;
    printf("Enter marks of 5 students\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    highest = marks[0];
    lowest = marks[0];
    for (int i = 0; i < 5; i++) {
        total = total + marks[i];
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
    average = (float)total / 5;
    printf("\nTotal marks: %d\n", total);
    printf("Average marks: %.2f\n", average);
    printf("Highest marks: %d\n", highest);
    printf("Lowest marks: %d\n", lowest);
}



