/*Factorial of number*/
#include<stdio.h>
void main(){
    int n,a,b=1;
    printf("Enter the value of number: ");
    scanf("%d",&n);
    if(n==0){
        n=1;
    }
    else{
        for(a=1;a<=n;a++){
            b=b*a;
        }
    }
    printf("Answer: %d",b);
}