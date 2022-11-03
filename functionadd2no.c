#include<stdio.h>
int add(int a,int b);
int main(){
    int c;
    c=add(2,5);
    printf("the sum is %d",c);
    return 0;
}
int add(int a,int b){
    int result;
    result=a+b;
    return result;
}