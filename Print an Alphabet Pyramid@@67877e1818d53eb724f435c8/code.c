#include<stdio.h>
int main(){
    int n,j,i;
    char ch;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j='A';j<='A'+1;i++){
            printf("%ch ",j);
        }
    }
    return 0;
}