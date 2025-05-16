#include<stdio.h>
void reverseArr(int x, int brr[x][x]){
    for(int i=0;i<x;i++){
        int j=0;
        int k=x-1;
        if(i%2!=0){
            while (j<k){
                int temp = brr[i][j];
                brr[i][j] = brr[i][k];
                brr[i][k] = temp;
                j++;
                k--;
            }
        }
    }
}
void printArr(int m, int arr[m][m]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter numbrt of row and column:");
    scanf("%d",&n);
     int arr[n][n];
     printf("Enter elements of array:\n");
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
     }
     reverseArr(n,arr);
     printf("Final array is:\n");
     printArr(n,arr);
    return 0;
}