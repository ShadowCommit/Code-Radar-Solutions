#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int count=0;
    while(a!=0){
        count++;
        a<<=1;
    }
    printf("%d",32-count);
    return 0;
}
