#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float prise;
        int noOf_page;
    }a,b,c;
   
    a.noOf_page = 200;
    a.prise = 411.5;
    // char ch[40];
    // strcpy(ch,"Secrect Seven");
    // printf("%s",ch);
    strcpy(a.name,"Secrect Seven");

    b.noOf_page = 500;
    b.prise = 789.65;
    strcpy(b.name,"Atomic love");

    c.noOf_page = 550;
    c.prise = 700.65;
    strcpy(c.name,"Love hurt");

    printf("%d\n",a.noOf_page);
    printf("%f\n",a.prise);
    printf("%s\n",a.name);

    printf("info of book B:");
    printf("\n%d",b.noOf_page);
    printf("\n%f",b.prise);
    printf("\n%s",b.name);

    printf("info of book c:");
    printf("\n%d",c.noOf_page);
    printf("\n%f",c.prise);
    printf("\n%s",c.name);
    
    return 0;
}