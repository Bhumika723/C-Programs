#include<stdio.h>
int main(){
    int n,i;
    int fact=1;
    printf("enter an integer:");
    scanf("%d",&n);
    if(n>0)
    for(i=1;i<=n;++i){
    fact*=i;
}
printf ("factorial of %d=%d",n,fact);
return 0;
}