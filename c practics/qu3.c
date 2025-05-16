#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    if(n%2==0 && n%3==0)
    printf("valid");
    else printf("Non- valid");
    return 0;
}