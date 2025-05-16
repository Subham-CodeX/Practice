#include<stdio.h>
int main(){
    char str[] ={'H','e','l','l','o'};
    int i=0;
    while(str[i] != '\0'){
         printf("%c",str[i]);
         i++;
    }

    char strr[] = "My name is Subham Mandal, I am a good boy";
    int j=0;
    while(strr[j] != '\0'){
        printf("%c",strr[j]);
        j++;
    }
    return 0;
}