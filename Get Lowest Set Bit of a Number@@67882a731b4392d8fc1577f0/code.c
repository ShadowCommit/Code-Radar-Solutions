#include<stdio.h>
int main(){
    int a,count;
    scanf("%d",&a);
    count = 0;
    while(a&1==0){
        a>>=1;
        count++;
    }
    printf("%d",count);
    return 0;
}