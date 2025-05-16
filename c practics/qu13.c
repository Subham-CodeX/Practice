#include<stdio.h>
int main(){
    int n,mul=1;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i=n;i!=0;i--){
         mul*=i;
    }
    printf("%d",mul);
    return 0;
}