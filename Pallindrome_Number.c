#include<stdio.h>
#include<math.h>
int main(){
    int n,rev=0,rem,orig;
    printf("enter an integer:");
    scanf("%d",&n);
    orig=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(orig==rev)
    printf("%d is pallindrome",orig);
    else
    printf("%d is not pallindrome");
    return 0;
}