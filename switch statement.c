#include<stdio.h>
int main(){
    int rating;
    scanf("%d",&rating);
    switch(rating){
        case 1:
            printf("This is number one");
            break;
        case 2:
            printf("This is number two");
            break;
        case 3:
            printf("This is number three");
            break;
        default:
            printf("The number is incorrect");
    }
}