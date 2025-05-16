#include<stdio.h>
int main(){
    int arr[6] = {4,5,6,7,4,3};
    int brr[6];
    for(int i=0;i<=5;i++){
        brr[i]=arr[5-i];
    }
    for(int i=0;i<=5;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}