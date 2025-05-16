#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Array is: ");
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<=n-1;i++){
        sum+=arr[i];
     }
     printf("Sum of all elements is: %d ",sum);
     return 0;
}