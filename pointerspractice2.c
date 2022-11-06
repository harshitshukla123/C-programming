#include<stdio.h>
void times(int *a){
    int b;
    b=10*(*a);
    printf("The after value of the variable is %d\n",b);
    }
int main(){
    int a=10;
    printf("The current value of the variable is %d\n",a);
    times(&a);
}
