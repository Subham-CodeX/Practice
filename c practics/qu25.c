#include<stdio.h>
int main(){
    int evenSum=0;
    int oddSum =0;
    int arr[6] = {5,3,2,1,4,6};
    for(int i=0;i<=5;i++){
        if(i%2 == 0)
        evenSum+=arr[i];
    }
    printf("sum of even index: %d\n",evenSum);
    for(int i=0;i<=5;i++){
        if(i%2 != 0)
        oddSum+=arr[i];
    }
    printf("sum of odd index: %d\n",oddSum);
    int ans = evenSum - oddSum;
    printf("ans is: %d ",ans);
     
    return 0;
}