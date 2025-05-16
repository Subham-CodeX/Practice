#include<stdio.h>
void sumOfallelements(int row,int col,int brr[row][col]){
    int sum =0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        sum+=brr[i][j];
    }
}
printf("sum of all elements: %d",sum);
}
int main(){
    int r,c;
    printf("Enter number of rows and collumns: ");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter elements of array:\n ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    sumOfallelements(r,c,arr);
    return 0;
}