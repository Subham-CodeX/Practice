#include<stdio.h>
void addTwomat(int row,int col,int a[row][col],int b[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            a[i][j] +=b[i][j];
        }
    }
}
void printMat(int row,int col, int c[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int r,c;
    printf("Enter row: ");
    scanf("%d",&r);
    printf("Enter column: ");
    scanf("%d",&c);
    int arr[r][c], brr[r][c];
    printf("First matrix is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Second matrix is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
        }
    }

    addTwomat(r,c,arr,brr);
    printf("Sum of two matrix is:\n");
    printMat(r,c,arr);
    return 0;
}