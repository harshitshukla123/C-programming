#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int no;
    srand(time(0));
    no=rand()%100+1;
    printf("The random number between 1 to 100 is %d",no);
    return 0;
}