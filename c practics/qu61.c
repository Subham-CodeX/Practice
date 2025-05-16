#include<stdio.h>
void transpose(int n,int brr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp= brr[i][j];
            brr[i][j] =brr[j][i];
            brr[j][i]=temp;
        }
    }
}
void reverse(int m,int crr[m][m]){
    for(int i=0;i<m;i++){
        int j=0,k=m-1;
        while(j<k){
            int temp = crr[i][j];
            crr[i][j] = crr[i][k];
            crr[i][k] = temp;
            j++,k--;
        }
    }
}
void printArr(int n, int arr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter row & column of matrix: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Array is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    transpose(n,arr);
    printf("Transepose array is:\n");
    printArr(n,arr);
    reverse(n,arr);
    printf("result array is:\n");
    printArr(n,arr);
    return 0;
}