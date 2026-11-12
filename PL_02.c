#include <stdio.h>
int main() {
    int marks = 0;
    int total = 0;
    int count = 0;
    float average;
    while (marks >= 0 && marks <= 100) {
        printf("Enter marks (-1 to stop): ");
        scanf("%d", &marks);
        if (marks >= 0 && marks <= 100) {
            total = total + marks;
            count++;
        }
    }
    if (count > 0) {
        average = (float)total / count;
        printf("\nTotal marks: %d\n", total);
        printf("Number of students: %d\n", count);
        printf("Average marks: %.2f\n", average);
    }
}

