#include<stdio.h>
int main(){
    int i=0,a=8,sum=0,prod;
    for(i=0;i<=10;i++){
        prod=a*i;
        sum=sum+prod;
    }
    printf("%d",sum);
    return 0;

}