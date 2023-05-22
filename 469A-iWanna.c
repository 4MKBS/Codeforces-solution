#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main(){
    int n,p,q,a[100],b[100];
    int count = 0,test=1;
    scanf("%d",&n);

    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++){
        scanf("%d",&b[i]);
    }
   //main part from here
     for(int i=0;i<p+q;i++,test++){
       for(int j=0;j<p+q;j++){
         if(test == a[j]){
            count++;
            break;
        }else if(test == b[j]){
            count++;
            break;
        }
       }
    
    }

    if(count == n){
        printf("I become the guy.\n");
    }else{
        printf("Oh, my keyboard!\n");
    }
    // printf("%d",count);
   // printf("%d",result);
    
   
    // for(int i=0;i<p+q;i++){
    //     printf("%d ",a[i]);
    // }
    // for(int i=0;i<q;i++){
    //     printf("%d ",b[i]);
    // }
    return 0;
}