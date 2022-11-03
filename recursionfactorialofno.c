#include<stdio.h>
int factorial(int x);
int main(){
    int a,b;
    scanf("%d",&b);
    a=factorial(b);
    printf("The factorial of a number is %d",a);
    return 0;
}
int factorial(int x){
        int f;
        if(x==0 || x==1)
        return 1;         //Recursion function calling itself
        else
        f=(factorial(x-1)*x);   
        return f;         //Recursion function calling itself
    }