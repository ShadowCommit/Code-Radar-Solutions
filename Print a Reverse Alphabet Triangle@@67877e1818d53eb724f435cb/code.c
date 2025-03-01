#include<stdio.h>
int main(){
    int n,i;
    char ch;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(ch='A';ch<'A'+i;ch--){
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}