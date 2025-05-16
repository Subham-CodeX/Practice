#include<stdio.h>
void reverse(int brr[], int si, int ed){
    for(int i=si,j=ed;i<j;i++,j--){
        int temp = brr[i];
        brr[i] = brr[j];
        brr[j]= temp;
    }
}
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d ",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter k: ");
    scanf("%d",&k);
    k =k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    printf("Modify array is:- ");
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}