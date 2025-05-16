#include<stdio.h>
int main(){
    char str[]="My name is ";
    char* ptr = str;
    printf("%p",ptr);
    printf("\n%p",str);
    return 0;
}