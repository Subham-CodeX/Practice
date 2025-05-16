#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main(){
    int random,guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("Welcome to the world of Guessing number\n");
    random = rand() % 100 +1; // Generating between 0 to 100
  //  printf("Number generated is: %d",random);

    do {
    printf("\nPlease enter your guess between(1 to 100): ");
    scanf("%d",&guess);
    no_of_guess++;

    if(guess < random){
        printf("Guess a larger number. \n");
    } else if(guess > random){
        printf("Guess a smaller number. \n");
    }else{
        printf("\nCongratulation !!! You have successfully guessed the number in %d attemps", no_of_guess);
    }

    } while(guess != random);


     printf("\n Bye Bye, Thanks for playing.");
     printf("\n Developed by: Subham Mandal");
}