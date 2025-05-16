#include<stdio.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Array is: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int si =0,ed=n-1;
    for(int i=si,j=ed;i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    // while(si<ed){
    //     int temp = arr[si];
    //     arr[si] = arr[ed];
    //     arr[ed] = temp;
    //     si++,ed--;
    // }
    printf("Reverse array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}