#include<stdio.h>
int main(){
    //Calculation of simple interest
    int p,r,t;
    float pi;
    scanf("%d%d%d",&p,&r,&t);
    pi=(p*r*t)/100;
    printf("The simple interest is %f",pi);
    return 0;
}