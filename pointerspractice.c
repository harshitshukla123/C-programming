#include<stdio.h>
int main(){
    int a=6;
    int *ptr=&a;
    printf("The address of the var is %u\n",&a);
    printf("The value of the variable is %d\n",*ptr);
}
