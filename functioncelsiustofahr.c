#include<stdio.h>
int temp(int celsius);
int main(){
    int celsius;
    float m;
    scanf("%d",&celsius);
    m=temp(celsius);
    printf("The converted temp is %f",m);
}
int temp(int celsius){
    float fahr;
    return fahr=((9*celsius)/5)+(32);
}