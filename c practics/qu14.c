#include<stdio.h>
int main(){
    int a;
    printf("Enter a: ");
    scanf("%d",&a);
    int b;
    printf("Enter b:");
    scanf("%d",&b);
    int mul =1;
    for(int i=1;i<=b;i++){
       mul*=a;
    }
    printf("%d raise to the power %d : is %d ",a,b,mul);
    return 0;
}