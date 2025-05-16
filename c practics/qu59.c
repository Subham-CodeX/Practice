#include<stdio.h>
int main(){
    int r,c;
    printf("Enter row: ");
    scanf("%d",&r);
    printf("Enter column: ");
    scanf("%d",&c);
    int arr[r][c];
    printf(" matrix is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int transposeMat[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transposeMat[j][i]= arr[i][j];
        }
    }
    printf("transpose matrix is:\n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",transposeMat[i][j]);
        }
        printf("\n");
    }
  
    return 0;
}