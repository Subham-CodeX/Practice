#include<stdio.h>
void addTwomatrix(int row,int col,int arr[row][col], int brr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]+=brr[i][j];
        }
    }
}
void printMatrix(int row,int col, int brr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
}
int main(){
   int r,c;
   printf("Enter the number of rows and columns: ");
   scanf("%d %d",&r,&c);
    int arr1[r][c], arr2[r][c];
    printf("Enter elements of first matrix:\n ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter elements of Second matrix:\n ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
     addTwomatrix(r,c,arr1,arr2);
     printf("result matrix is:\n ");
  printMatrix(r,c,arr1);
    return 0;
}