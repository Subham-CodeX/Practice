#include<stdio.h>
//void sum(int l1, int r1,int l2,int r2, int brr[][])
int main(){
    int r,c,sum=0;
    printf("Enter number of row and columns:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter elements of array:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int l1,r1,l2, r2;
    scanf("%d %d",&l1,&r1);
    scanf("%d %d",&l2,&r2);

    for(int i=l1;i<=l2;i++){
        for(int j=r1;j<=r2;j++){
            sum+=arr[i][j];
        }
    }
    printf("%d ",sum);
    return 0;
}