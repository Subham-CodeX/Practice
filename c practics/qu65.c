#include<stdio.h>
int main(){
char str[] = "Physics walla is best";
str[1] = 98;
int i=0;
while(str[i] != '\0'){
    printf("%c",str[i]);
    i++;
}
    return 0;
}