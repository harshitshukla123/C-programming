#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main(){
    //print goodmorning,aftenoon and night using functions
    int a;
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}
void goodmorning(){
    printf("Good Morning\n");
}
void goodafternoon(){
    printf("Good Afternoon\n");
}
void goodnight(){
    printf("Good Night\n");
}
