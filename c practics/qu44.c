#include<stdio.h>
#include<limits.h>
void maxEle(int p,int q, int brr[p][q]){
    int maxIndrow = -1;
    int maxIndcol = -1;
    int max = INT_MIN;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            if(max < brr[i][j]){
                max = brr[i][j];
                maxIndrow =i;
                maxIndcol =j;
            }
        }
    }
    printf("Maximum element is: %d ",max);
    printf("\nIndex of max element: %d %d",maxIndrow,maxIndcol);
}
int main(){
    int m;
    printf("Enter the number of row of  matrix: ");
    scanf("%d",&m);
    int n;
    printf("Enter the number of column of  matrix: ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter elements of 1st matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    maxEle(m,n,arr);
    return 0;
}