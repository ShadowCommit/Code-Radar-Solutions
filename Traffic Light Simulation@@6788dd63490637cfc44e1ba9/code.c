#include<stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    switch(ch){
        case 'R':
        case 'r':
            printf("Stop");
            break;
        case 'G':
        case 'g':
            printf("Go");
            break;
        case 'Y':
        case 'y':
            printf("Slow Down");
            break;
        default:
            printf("Invalid input");
            break;
    }
    return 0;
}