#include <stdio.h>

int main()
{
    int n, e[100000], p=0, result = 0, i;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &e[i]);
    }
    for(i=0; i<n; i++)
    {
        if(e[i]==-1)
        {
            p++;
        }
        else
        {
            e[i+1]+=e[i];
        }
    }
    printf("%d\n",p);
}