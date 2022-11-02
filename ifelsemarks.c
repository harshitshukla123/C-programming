#include<stdio.h>
int main(){
    int a,b,c,total;
    scanf("%d%d%d",&a,&b,&c);
    total=(a+b+c)/3;
    if(total<40){
        printf("FAIL");
    }
    else if(a<33){
        printf("FAIL");
    }
    else if(b<33){
        printf("FAIL");
    }
    else if(c<33){
        printf("FAIL");
    }
    else{
        printf("PASS");
    }
    return 0;
}
