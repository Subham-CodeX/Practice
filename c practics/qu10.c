#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
     while(n>0){
       int ld = n%10;
       sum+=ld;
       n/=10;

     }
     printf("Sum of digits is: %d ",sum);
    return 0;
}