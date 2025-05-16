#include<stdio.h>
void reverse(int brr[]){
    int i=0;
    int j=5;
    while(i<j){
    int temp = brr[i];
    brr[i] = brr[j];
    brr[j] = temp;
    i++;
    j--;
    }


}
int main(){
    int arr[6] = {3,4,5,6,3,2};
    reverse(arr);
    printf("Reverse array:- ");
    for(int i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}