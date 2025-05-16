#include<stdio.h>
int main(){
    int n;
    printf("Enter age:");
    scanf("%d",&n);
    if(n<12)
        printf("Child");
    else if(n>12 && n<18)
    printf("Teenager");
    else
    printf("Adult");
    
   
    return 0;
}