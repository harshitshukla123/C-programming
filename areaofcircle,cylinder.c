#include<stdio.h>
int main(){
    //area of circle
    float r,h,area,vol;
    scanf("%f",&r);
    area=(3.14)*(r*r);
    printf("The area of the circle is %f",area);
    //volume of the cylinder
    scanf("%f",&h);
    vol=(3.14)*(r*r)*h;
    printf("The volume of the cylinder is %f",vol);
    return 0;
}