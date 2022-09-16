#include<stdio.h>
int main(){
    int n,sum=0,temp,r;
    printf("enter the no. to test it is palindrome or not ");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum){
        printf("it is a palindrome number");
    }
    else{
        printf("it is not a palindrome number");
    }
    return 0;
}
