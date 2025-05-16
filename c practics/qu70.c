#include<stdio.h>
#include<string.h>
int main(){
    struct myFamily{
        int val;
        char name[50];

    }subh,nobo,ma,baba;
   //  printf("Info about subho:");
      subh.val = 3;
      strcpy(subh.name,"Subham Mandal");
     // printf("Info about nobo:");
      nobo.val = 4;
      strcpy(nobo.name,"Subhankar Mandal");
   //   printf("Info about Ma:");
      ma.val = 2;
      strcpy(ma.name,"Bandana Mandal");
   //   printf("Info about Baba:");
      baba.val = 1;
      strcpy(baba.name,"Shibnarayan Mandal");

      printf("Info about subho:");
      printf("\n%d",subh.val);
      printf("\n%s",subh.name);
      printf("Info about nobo:");
      printf("\n%d",nobo.val);
      printf("\n%s",nobo.name);
      printf("Info about Ma:");
      printf("\n%d",ma.val);
      printf("\n%s",ma.name);
      printf("Info about Baba:");
      printf("\n%d",baba.val);
      printf("\n%s",baba.name);


    return 0;
}