#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("size of array: ");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int i=0;
    int j=n-1;
    bool flag = true;
    while(i<j){
        if(arr[i] == arr[j]){
        flag = true;
        }else
        flag = false;
        break;
        i++; 
        j--;

    }
    printf("\n");
    if(flag == true)
    printf("Array is palindromic");
    else 
    printf("Array is not palindromic");
    return 0;
}