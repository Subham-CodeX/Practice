#include<stdio.h>
int main(){
    int n;
    printf("Enter no of row/column: ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Array is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp=arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("transpose matrix is:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}