#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(i=0;(a&1)==0;i++){
        a>>=1;
    }
    printf("%d",i);
    return 0;

}