#include <stdio.h>
int main() {
    int marks[5], i, sum = 0;
    float average;
    printf("Enter the marks of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    average = sum / 5.0;
    printf("\nSum of the marks: %d\n", sum);
    printf("Average of the marks: %.2f\n", average);
    return 0;
}
