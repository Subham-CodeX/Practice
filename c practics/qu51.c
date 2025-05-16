#include<stdio.h>
int main(){
    int n;
    printf("Enter the element number of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Elements are: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}