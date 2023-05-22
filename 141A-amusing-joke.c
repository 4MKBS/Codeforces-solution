#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    char s[101],g[101];
    char d[101];
    int len,lenb,tlen,dlen;
    scanf("%s",&s);
    scanf("%s",&g);
    scanf("%s",&d);
   len=strlen(s);
   lenb=strlen(g);
   dlen=strlen(d);
   tlen=len+lenb;
   strcat(s,g);

   int count = 0;
   if(tlen != dlen){
        printf("NO\n");
    }
    else{
        for(int i=0;i<dlen;i++){
            for(int j=0;j<dlen;j++){
                if(s[i]==d[j]){
                    d[j]='$';
                    count++;
                    break;
                }
                }
            }
        if(count == dlen){
            printf("YES\n");
        }else{
            printf("NO\n");
            }
        }
    //printf("%s",strcat(s,g));



return 0;
}
