#include<stdio.h>
void main(){
    int x,y;
    
    printf("enter x:");
    scanf("%d",&x);
    printf("enter y:");
    scanf("%d",&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping");
    printf("\nx:%d",x);
    printf("\ny:%d",y);
   
}