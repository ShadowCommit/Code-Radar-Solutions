#include <stdio.h>
int main() {
    int a,count;
    scanf("%d",&a);
    count=0;
    while(a!=0){
        count++;
        a>>=1;

    }
    printf("%d",count-32);
    return 0;
}