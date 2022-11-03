#include<stdio.h>
int main(){
    int i,a,prod;
    scanf("%d",&a);
    //for(i=1;i<=10;i++){
    //    prod=a*i;
    //    printf("%d*%d=%d\n",a,i,prod);
    //}
    for(i=10;i>=1;i--){
        prod=a*i;
        printf("%d*%d=%d\n",a,i,prod);
    }
    return 0;
}