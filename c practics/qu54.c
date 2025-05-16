#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int searchEle,indexOfSear;
    printf("Search element is:");
    scanf("%d",&searchEle);
    bool flag = false;
    
    for(int i=0;i<n;i++){
        if(arr[i] == searchEle){
            flag = true;
            indexOfSear = i;
            break;
        }
    }  

       if(flag == true){
          printf("Element is present in array and it's index is: %d ",indexOfSear);
       }else
       printf("Element is not present in array");
       return 0;
} 