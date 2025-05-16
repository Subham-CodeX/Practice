#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
          
        }
    }
    printf("Maximum element is: %d\n",max);
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
          
        }
    }
    printf("Minimum element is: %d\n",min);

     int maxDif = max - min;
      printf("Maximun different between array's two element is: %d - %d = %d ",max,min,maxDif);
    return 0;
}
