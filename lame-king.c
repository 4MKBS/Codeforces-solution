#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int n,result=0;
    int a,b;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d %d",&a,&b);
        a=abs(a);
        b=abs(b);
        if (a == b)
        {
            result=a+b;
            printf("%d\n",result);
        }else{
             if(a>b){
                result=(a*2)-1;         
                printf("%d\n",result);
             }else{
                result=(b*2)-1;
                printf("%d\n",result);
             }
        }
    }

    
    return 0;
}