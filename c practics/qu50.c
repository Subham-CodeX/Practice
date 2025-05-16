#include<stdio.h>
int main(){
    int m;
    printf("Enter no of rows of 1st matrix: ");
    scanf("%d",&m);
    int n;
    printf("Enter no of columns of 1st matrix: ");
    scanf("%d",&n);
    int a[m][n];
    printf("Enter elements of 1st matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }

    // wave print
    printf("result matrix is:\n");
   for(int i=0;i<n;i++){
    if(i%2==0){
        for(int j=m-1;j>=0;j--){
            printf("%d ",a[i][j]);
        }
    }else{
        for(int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
    }
   }
    return 0;
}