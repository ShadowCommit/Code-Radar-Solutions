#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>=90){
        printf("A%c");
    }
    else if(a>=80 && a<90){
        printf("B%c");
    }
    else if(a>=70 && a<80){
        printf("C%c");
    }
    else if(a>=60 && a<70){
        printf("D&c");
    }
    else{
        printf("F%c");
    }
    return 0;
}
