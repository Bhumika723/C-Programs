#include<stdio.h>
int main(){
    int i,n;
    int t1=0,t2=1;
    int next_term= t1+t2;
    printf("enter number of terms:");
    scanf("%d",&n);
    printf("fibbonacci series: %d,%d",t1,t2);
    for(i=3;i<=n;++i){
        printf(",%d",next_term);
        t1=t2;
        t2=next_term;
        next_term=t1+t2;    
    }
    return 0;
}