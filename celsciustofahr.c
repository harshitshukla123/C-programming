#include <stdio.h>
int main(){
    //Temerature conversion from celscius to fahrenheit
    int c;
    float fahr;
    scanf("%d",&c);
    fahr=((9*c)/5)+32;
    printf("The converted value is %f",fahr);
    return 0;
}