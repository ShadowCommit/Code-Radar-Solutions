#include <stdio.h>
int main() {
    unsigned a;
    int count;
    scanf("%u",&a);
    count=0;
    while(a!=0){
        count++;
        a>>=1;
    }
    printf("%d",32-count);
    return 0;
}