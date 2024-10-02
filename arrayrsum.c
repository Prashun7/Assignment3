#include <stdio.h>
int main(){
    int arr[3][2]={
        {3, 5},
        {7, 2},
        {9, 4}
    };
    int sum, i, j;
    for (i=0;i<3;i++){
        sum = 0;
        for (j = 0;j<2;j++){
            sum += arr[i][j];
        }
        printf("Sum of elements in row %d: %d\n",i+1,sum);
    }
    return 0;
}
