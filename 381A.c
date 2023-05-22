#include<stdio.h>

int max(int arr[], int n);

int main(){
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    max(arr, n);
    
}

int max(int arr[],int n){
    int m = arr[0], index = 0;
    for (int i = 0; i < n; i++)
    {
        if(m<arr[i]){
            m = arr[i];
            index = i;
        }
    }
    return m, index;
}

