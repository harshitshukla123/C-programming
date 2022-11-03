#include<stdio.h>
int Area(int a);
//area of the square using the functions
int main(){
    int c,d;
    scanf("%d",&c);
    d=Area(c);
    printf("The area of the square is %d",d);
    return 0;
}
int Area(int a){
    int area;
    area=(a*a);
    return area;
}