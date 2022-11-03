#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*a random number will be there you have to guess that number
if its high the it will show go low otherwise go high*/
int main(){
    int no,guess,nguesses=1;
    srand(time(0));
    no=rand()%100+1;
    //printf("The random number between 1 to 100 is %d\n",no);
    do{
        printf("Enter the guess number between 1 to 100\n");
        scanf("%d",&guess);
        if(no<guess){
        printf("Guess lower number\n");
    }
        else if(no>guess){
        printf("Guess higher number\n");
    }
        else{
        printf("You have guessed right number in %d attempts\n",nguesses);
    }
    nguesses++;
    }
    while(guess!=100);
    return 0;
}