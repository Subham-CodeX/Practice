#include<stdio.h>
void printMat(int a, int b, int arr[a][b]){
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int m,n;
    printf("Enter row of first mat: ");
    scanf("%d",&m);
    printf("Enter column of first matrix: ");
    scanf("%d",&n);
    int mat1 [m][n];
    printf("First matrix is:\n");
    for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            scanf("%d",&mat1[i][j]);
         }
    }
    int p,q;
    printf("Enter row of second mat: ");
    scanf("%d",&p);
    printf("Enter column of second matrix: ");
    scanf("%d",&q);
    int mat2 [p][q];
    printf("Second matrix is:\n");
    for(int i=0;i<p;i++){
         for(int j=0;j<q;j++){
            scanf("%d",&mat2[i][j]);
         }
    }
    if(n!=p){
        printf("Multiplication is not possible");
    }else{
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                 res[i][j]=0;
                 for(int k=0;k<n;k++){
                    res[i][j]+=mat1[i][k] * mat2[k][j];
                 }
            }
        }

        printf("resulting matrix is:\n");
        printMat(m,q,res);
    }

    return 0;
}