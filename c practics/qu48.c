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
void reverseMat(int x,int crr[x][x]){
   for(int i=0; i<x;i++){
    int j=0;
    int k=x-1;
    while(j<k){
        int temp = crr[i][j];
        crr[i][j] = crr[i][k];
        crr[i][k] = temp;
        j++;
        k--;
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
     reverseMat(n,arr);
     printf("Final matrix:\n");
     printMat(n,arr);
    return 0;
}