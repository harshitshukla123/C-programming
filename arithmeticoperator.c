#include<stdio.h>
int main(){
    //arithmetic operation.
    int a,b,w,x,y,z,m;
    scanf("%d %d",&a,&b);
    w=a+b;
    printf("The sum of %d and %d is %d\n",a,b,w);
    x=a-b;
    printf("The substraction of %d and %d is %d\n",a,b,x);
    y=a*b;
    printf("The multiplication of %d and %d is %d\n",a,b,y);
    z=a/b;
    printf("The division of %d and %d is %d\n",a,b,z);
    m=a%b;
    printf("The remainder of %d and %d is %d\n",a,b,m);
    return 0;


}