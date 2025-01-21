#include<stdio.h>
int main(){
    char ch[100],h;
    int a;
    scanf("%s %d",&ch, &a);
    scanf("%s",&h);
    printf("Name: %s\n",ch);
    printf("Age: %d\n",a);
    printf("Name: %s",ch);
    return 0;
}