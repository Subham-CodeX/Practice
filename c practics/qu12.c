#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter n:");
    scanf("%d",&n);
    while(n>0){
        int ld = n%10;
        n/=10;
        if(ld%2==0)
        sum-=ld;
        else
        sum+=ld;
    }
    printf("%d",sum);
    return 0;
}