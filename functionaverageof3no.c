#include<stdio.h>
int average(int a,int b,int c);
int main(){
    int a,b,c,d;
    scanf("%d%d%d",&a,&b,&c);
    d=average(a,b,c);
    printf("The average of %d,%d,%d is %d",a,b,c,d);
}
int average(int a,int b,int c){
    int m;
    m=(a+b+c)/3;
    return m;
}