#include<stdio.h>
int main(){
    int r,c;
    printf("Enter number of row and columns:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter elements of array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");

    int maxSum = 0;
    int maxsumInd = -1;
    for(int i=0;i<r;i++){
        int sum =0;
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
        if(maxSum<sum){
            maxSum = sum;
            maxsumInd = i;
        }
    }
    printf("The row which have maximum sum: %d\n",maxsumInd);
    printf("Maximum vaue is: %d ",maxSum);
    return 0;
}