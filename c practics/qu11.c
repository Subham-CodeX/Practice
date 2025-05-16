#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int rev=0;
    while(n>0){
        int ld = n%10;
        n/=10;
        rev = (rev*10) + ld;
       
    }
    printf("%d",rev);
    return 0;
}