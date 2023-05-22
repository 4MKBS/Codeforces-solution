#include <stdio.h>

int main()
{
    int n, e[100000], p=0, result = 0, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &e[i]);
    }
    for(i = 0; i < n; i++)
    {
       if(e[i]>0 && e[i]<=10){
            p +=e[i];
        }
         if(e[i]<0 && p>0){
            p += e[i];
        }
        else if(e[i]<0 && p==0){
            result++;
        }
    }    
    printf("%d\n",result);
}