#include<stdio.h>
#include<string.h>
int main(){
   char str[60];
  puts("Input string is:");
  gets(str);
  puts("The original string is:");
  puts(str);
  int size =0;
  int k=0;
  while(str[k] != '\0'){
    size++;
    k++;
  }
  printf("size is:\n%d",size);
  // reverse
  for(int i=0,j=size-1;i<=j;i++,j--){
    int temp = str[i];
    str[i] = str [j];
    str[j] = temp;
  }
  printf("\n");
  puts("Reverse string is:");
  puts(str);

    return 0;
}