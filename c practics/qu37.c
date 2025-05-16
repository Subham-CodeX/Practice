#include<stdio.h>
#include<limits.h>
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
    int max = INT_MIN;
    int maxIndrow = -1;
    int maxIndcol = -1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
            max = arr[i][j];
            maxIndrow = i;
            maxIndcol = j;
            }
        }
    }
    printf("Maximun element is: %d\n",max);
    printf("Index of max element : %d %d",maxIndrow,maxIndcol);
    return 0;
}