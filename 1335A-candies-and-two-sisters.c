#include<stdio.h>
int main(){
    int n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(n%2 == 0){
            n=(n/2)-1;
            printf("%d\n",n);
        }else{
            n=n/2;
            printf("%d\n",n);
        }
    }

return 0;
}
