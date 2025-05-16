#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5] ={3,5,6,5,3};
    for(int i=0;i<=4;i++){
        bool flag = false;
        for(int j=i+1;j<=4;j++){
            if(arr[i] == arr[j]){
                flag = true;
            }
        }
        if(flag == false){
        printf("Uniqe number is: %d",arr[i]);
        break;
        }
    }
    return 0;
}