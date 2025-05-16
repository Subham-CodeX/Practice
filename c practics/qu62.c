#include<stdio.h>
int main(){
    int r,c,sum=0,product=1;
    printf("Enter row of matrix: ");
    scanf("%d",&r);
    printf("Enter column of matrix: ");
    scanf("%d",&c);
    int arr[r][c];
    printf("Matrix is:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // sum of all elements
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    printf("Sum of all elements is: %d",sum);
    // product of all element
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           product*=arr[i][j];
        }
    }
    printf("\nproduct of all elements is: %d",product);

    return 0;
}