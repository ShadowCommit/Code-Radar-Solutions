#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=1 && a<=100){
        prinf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}