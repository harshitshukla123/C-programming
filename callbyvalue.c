#include<stdio.h>
int Sum(int a,int b);
int main(){
    int a=4,b=5,c;
    c=Sum(a,b);
    printf("The sum of %d and %d is %d",a,b,c);
    return 0;
    
}
int Sum(int a,int b){
    return a+b;
}