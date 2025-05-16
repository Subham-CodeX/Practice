#include<stdio.h>
void reverse(int brr[],int si,int ed){
    int i =si;
    int j=ed;
    while(i<j){
        int temp = brr[i];
        brr[i]=brr[j];
        brr[j]= temp;
        i++;
        j--;
    }
}
int main(){
    int arr[6] ={3,4,5,6,7,8 };
    reverse(arr,0,3);
    printf("Modify array is:- ");
    for(int i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}