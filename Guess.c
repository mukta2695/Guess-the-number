#include <stdio.h>
#include <stdlib.h> 
#include <time.h>   

int main()
{
    printf("Hello! Let's play a game.\n");
    printf("You have to guess the number that I will choose in my mind.\n");

    int number_chosen, number_guessed, number_of_guesses=0;
    srand(time(0));
    number_chosen = rand()%100 + 1; 
    //printf("The number is %d\n", number_chosen);

    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &number_guessed);
        number_of_guesses++;
        if(number_guessed>number_chosen){
            printf("Please guess a lower number please!\n");
        }
        else if(number_guessed<number_chosen){
            printf("Please guess a higher number please!\n");
        }
        else{
            printf("Congratulation! You guessed my number correctly in %d attempts.\n", number_of_guesses);
        }
        
    }while(number_guessed!=number_chosen);

   
    

    return 0;
}