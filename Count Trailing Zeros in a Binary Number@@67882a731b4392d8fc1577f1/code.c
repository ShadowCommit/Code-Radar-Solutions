#include<stdio.h>
int mian(){
    int a;
    scanf("%d",&a);
    int count=0;
    while(a!=0){
        count++;
        a<<=1;

    }
    printf("%d",count-32);
    return 0;
}
