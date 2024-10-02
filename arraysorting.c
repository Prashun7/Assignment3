#include <stdio.h>
int main() {
    int marks[100], n, i, highest;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    highest = marks[0];
    for (i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
    printf("\nThe highest score is: %d\n", highest);
    return 0;
}
