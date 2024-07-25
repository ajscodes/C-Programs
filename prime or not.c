/*Check number is prime or not*/
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of number: ");
    scanf("%d",&n);
    for(i=1;i<=((n)/2);i++){
        if(n%i==0){
            printf("Prime");
        }
        else{
            printf("Not Prime");
        }
    }
}