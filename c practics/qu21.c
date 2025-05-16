#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Array is:- ");
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int max =INT_MIN;
    int secMax = INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i])
        max = arr[i];
    }
    for(int i=0;i<=n-1;i++){
        if((arr[i] != max ) && (secMax < arr[i]))
        secMax = arr[i];
    }
    printf("Second maximum element is: %d ", secMax);
    return 0;
}