#include<stdio.h>
int main(){
    int i,a,fact=1;
    scanf("%d",&a);
    //5!=1*2*3*3*4*5
    for(i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("%d\n",fact);
    return 0;
}