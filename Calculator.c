#include<stdio.h>
int main(){
    int a,b,c; char d;
    printf("enter operator =,-,*,/:");
    scanf("%c",&d);
     printf("enter two numbers:");
      scanf("%d%d",&a,&b);
      switch(d){
        case '+': c=a+b;
        printf("sum %d",c);
        break;
        case '-': c=a-b;
        printf("difference %d",c);
        break;
        case '*': c=a*b;
        printf("product %d",c);
        break;
        case '/': c=a/b;
        printf("division %d",c);
        break;
        default:
        printf("unvalid operator");
    }
    return 0;
}