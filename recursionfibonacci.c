#include<stdio.h>
int fib(int a);
int main(){
    int x,y;
    scanf("%d",&x);
    y=fib(x);
    printf("Fibonacci is %d",y);
    
}
int fib(int a){
    int m;
    if(a==0)
    return 0;
    else if(a==1)
    return 1;
    else{
        m=fib(a-1)+fib(a-2);
        return m;
    }
}