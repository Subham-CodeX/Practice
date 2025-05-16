#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];

    printf("Array is: ");
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i] * arr[i]);
    }
    return 0;
}