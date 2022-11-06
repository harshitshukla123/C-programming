#include<stdio.h>
void sumandavg(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=(float)*sum/2;
}
int main(){
    int c,d,sum;
    float avg;
    c=3;
    d=6;
    sumandavg(c,d,&sum,&avg);
    printf("The value is %d",sum);
    printf("The value is %d",avg);
    return 0;
    

}
