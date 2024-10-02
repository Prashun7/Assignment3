#include<stdio.h>
int main(){
    int a[5];
    int odd=0,even=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    for(int j=0;j<5;j++){
        if(a[j]%2==0){
            even++;
        }else{
            odd++;
        }
    }
    printf("The number of odd numbers = %d\n",odd);
    printf("The number of even numbers = %d ,even");
    return 0;
    
}