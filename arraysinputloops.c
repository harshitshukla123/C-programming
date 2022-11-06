#include<stdio.h>
int main(){
    int i;
    int arr[5];
    for(i=0;i<=5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=5;i++){
        printf("%d\t",arr[i]);
    }
}