#include <stdio.h>
int main() {
    int a,count;
    scanf("%d",&a);
    count=0
    while(!(a&(~32))){
        count++;
        a<<=1;
    }
    printf("%d",count);
    return 0;
}