#include<stdio.h>
int main(){
    for(int i=1;i<=50;i++){
        if(i%3==0)
        continue;
        printf("%d ",i);
    }
    return 0;
}