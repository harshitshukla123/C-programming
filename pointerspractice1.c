#include<stdio.h>
void add(int b){
    printf("The address of a is %u\n",&b);
}
int main(){
    int a=5;
    printf("The value of a is %d\n",a);
    add(a);
    printf("The value of address is %u\n",&a);

}