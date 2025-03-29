// Your code here...
// Your code here...
#include<stdio.h>
int main(){
    int i,n,even,odd,arr[100];
    even=0;
    odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d ",arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}