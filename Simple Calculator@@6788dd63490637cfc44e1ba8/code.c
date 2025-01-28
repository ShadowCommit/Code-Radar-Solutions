#include <stdio.h>
int main(){
    char a,b,c;
    scanf("%d %d %c",&a,&b,&c);
    switch(c){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        default:
            printf("error");
            break;
    }
    return 0;
}