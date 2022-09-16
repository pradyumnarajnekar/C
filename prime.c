#include<stdio.h>
int main()
{
    int a,i,temp;
    temp=0;
    printf("Enter the number:");
    scanf("%d",&a);
    if (a==1)
    {
        printf("1 is neither a prime nor a composite number");
    }
    else
    {
        for(i=2;i<a;i++)
        {
            if ((a%i)==0)
            {
                temp++;
            }
                    }
        if(temp==0)
        {
            printf("Taken number is prime number.");
        }            
        else
        {
            printf("Taken number is not a prime number");
        }
        
    }
    return 0;
}