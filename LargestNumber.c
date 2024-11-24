#include<stdio.h>
int main(){
    int n;
    int arr[100],max=-1;
    printf("enter number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        printf("enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;++i){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    printf("largest element=%d",max);
    return 0;
}