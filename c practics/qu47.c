#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the number of row and column of 1st matrix: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    printf("Enter elements of 1st matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int p,q;
    printf("Enter the number of row and column of 1st matrix: ");
    scanf("%d %d",&p,&q);
    int b[p][q];
    printf("Enter elements of 1st matrix:\n");
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&b[i][j]);
        }
    }

     if(n!=p){
        printf("Multiplication invalid");
     }
     else{
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("Multiplication is:\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",res[i][j]);
            }
            printf("\n");
        }
     }
    return 0;
}