#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j='A';j<='Z';j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}