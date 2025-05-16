#include<stdio.h>
int main(){
    int r,c;
    printf("Enter numbrt of row and column:");
    scanf("%d %d",&r,&c);
     int arr[r][c];
     printf("Enter elements of array:\n");
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
     }
     for(int i=0;i<r;i++){
        int sum =0;
        for(int j=0;j<c;j++){
          sum+=arr[i][j];
        }
        printf("%d ",sum);
     }
     return 0;
}