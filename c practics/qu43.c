#include<stdio.h>
void addMat(int p, int q, int arr[p][q],int brr[p][q]){
  for(int i=0;i<p;i++){
    for(int j=0;j<q;j++){
        arr[i][j]+=brr[i][j];
    }
  }
}

void printMat(int x,int y, int mat[x][y]){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int m;
    printf("Enter the number of row of  matrix: ");
    scanf("%d",&m);
    int n;
    printf("Enter the number of column of  matrix: ");
    scanf("%d",&n);
    int a[m][n],b[m][n];
    printf("Enter elements of 1st matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter element of second matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }

    addMat(m,n,a,b);
    printf("Result matris is:\n");
    printMat(m,n,a);
    
    return 0;
}