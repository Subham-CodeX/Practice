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
    int maxCount =0;
    int maxInd=-1;
    for(int i=0;i<r;i++){
        int count =0;
        for(int j=0;j<c;j++){
            if(arr[i][j] == 1)
            count++;
        }
        if(maxCount<count){
            maxCount = count;
            maxInd = i;
        }
    }
    printf("%d %d",maxCount,maxInd);
    return 0;
}