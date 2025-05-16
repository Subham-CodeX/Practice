#include<stdio.h>
void transposeMat(int m, int brr[m][m]){
    for(int i=0;i<m;i++){
        for(int j=i;j<m;j++){
            int temp = brr[i][j];
            brr[i][j]=brr[j][i];
            brr[j][i] = temp;
        }
    }
}
void printMat(int a, int crr[a][a]){
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            printf("%d ",crr[i][j]);
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
     transposeMat(n,arr);
     printf("Transpose matrix is:\n");
     printMat(n,arr);
    return 0;
}