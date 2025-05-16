#include<stdio.h>
void reverse(int brr[],int si,int ed){
    int i=si,j=ed;
    while(i<j){
        int temp=brr[i];
        brr[i] = brr[j];
        brr[j] = temp;
        i++,j--;
    }
}
int main(){
    int n;
    printf("Enter size pf array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Array is: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter no of rotation: ");
    scanf("%d",&k);

    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    printf("Rotate array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
   
    return 0;
}