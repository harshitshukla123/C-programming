#include<stdio.h>
int main(){
    //Write the value of i using pointer to pointer technique
    int *ptr,**ptr1,i=5;
    ptr=&i;
    ptr1=&ptr;
    printf("The value of i is %d",**ptr1);
    return 0;
}