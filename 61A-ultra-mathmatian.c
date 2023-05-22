#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[101], b[101];
    int l, i;
    scanf("%s %s", &a, &b);
    l=strlen(a);
    for(i = 0; i < l; i++)
    {
        if(a[i]==b[i] && a[i]=='1')
        {
            a[i]='0';
        }
        else if(a[i]==b[i] && a[i]=='0')
        {
            a[i]='0';
        }
        else
        {
            a[i]='1';
        }
    }
    printf("%s", a);
}
