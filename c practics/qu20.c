#include<stdio.h>
#include<limits.h>
int main(){
    int arr[6] ={3,4,6,7,8,2};
    int max = INT_MIN;
    for(int i=0;i<=5;i++){
        if(max<arr[i])
        max = arr[i];
    }
    printf("Maximum value is: %d",max);
    return 0;
}