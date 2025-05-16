#include<stdio.h>
int main(){
    int n,x,count=0;
    printf("Size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter target is:- ");
    scanf("%d",&x);
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n-1;i++){
        if(arr[i] > x)
        count++;
    }
    printf("Ans is: %d ",count);
    return 0;
}