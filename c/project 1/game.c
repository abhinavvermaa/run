#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 + 1;//generaate a random number from 1 to 100
    //printf("the is number is %d \n", number);
    //keep running the loop until the number is gussed 
    do{
        printf("guess a number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("lower number please!\n");
        }
        else if(guess<number){
            printf("higher number please");
        }
        else{
            printf("you guessed it in %d attempts",nguesses);
        }
        nguesses++;

    }while(guess!=number);
    return 0;
}