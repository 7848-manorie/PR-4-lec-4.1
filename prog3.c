#include<stdio.h>
void main(){
    float x,y,ans;
    printf("enter x:");
    scanf("%f",&x);
    printf("enter y:");
    scanf("%f",&y);
    ans=(x+y)*(x+y)*(x+y);
    printf("(x+y)^3=%.2f",ans);
}