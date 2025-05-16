#include<stdio.h>
void transposeMat(int n,int brr[n][n]){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp =  brr[i][j];
            brr[i][j] = brr[j][i];
            brr[j][i] = temp;
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
    printf("Enter row and column: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter elements of array:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
             scanf("%d",&arr[i][j]);
        }
    }

    transposeMat(n,arr);
    printf("Transpose array is:\n ");
    printArr(n,arr);
    return 0;
}