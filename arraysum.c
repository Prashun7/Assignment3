#include <stdio.h>
int main() {
    int arr1[5], arr2[5], sum[5], i;
    printf("Enter 5 numbers for the first array:\n");
    for (i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter 5 numbers for the second array:\n");
    for (i=0;i<5;i++){
        scanf("%d",&arr2[i]);
    }
    for (i=0;i<5;i++){
        sum[i]=arr1[i]+arr2[i];
    }
    printf("Sum of corresponding numbers from both arrays:\n");
    for (i=0;i<5;i++){
        printf("Sum of the numbers %d\n",i+1,sum[i]);
    }
    return 0;
}
