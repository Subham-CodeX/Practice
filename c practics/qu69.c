#include<stdio.h>
#include<string.h>
int main(){
    struct pokemon{
        int hp;
        float speed;
        char tire;
    };
    printf("Info abour pikachu: ");
    struct pokemon pikachu;
    pikachu.hp=99;
    //pikachu.speed = 107.4;
    pikachu.tire = 'A';
    printf("Enter speed of pikachu: ");
    scanf("%f",&pikachu.speed);

    printf("%d\n",pikachu.hp);
    printf("%f\n",pikachu.speed);
    printf("%c\n",pikachu.tire);

return 0;
}