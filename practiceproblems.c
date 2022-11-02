#include<stdio.h>
int main(){
    //data type of 3.0/8-2
    float x;
    int y;
    x=3.0/8-2;
    printf("%f",x);
    //check whether a number is divisible by 97 or not
    scanf("%d",&y);
    if(y%97==0){
        printf("The number is divisible by 97\n");
    }
    else{
         printf("The number is  not divisible by 97\n");
    }
    //calculation of 3*x/y-z+k
    int a=2,b=3,c=3,k=1;
    float m;
    m=3*a/b-c+k;
    printf("The value of m is %f",m);
    
    return 0;
}