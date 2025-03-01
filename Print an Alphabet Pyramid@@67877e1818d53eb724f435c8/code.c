#include<stdio.h>
int main(){
    int n,j,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j='A';j<='A'+i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}