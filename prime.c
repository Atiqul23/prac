#include<stdio.h>

int main(){

    int n,prime = 1;
    scanf("%d",&n);

    if (n<2)
    {
        prime = 0;
    }
    

    for (int i = 2; prime && i*i <=n; i++)
    {
        if (n%i==0)
        {
            prime = 0;
        }
        
    }

    if (prime)
    {
        printf("Prime number\n");
    }else 
    {
        printf("Not prime number");
    }

    return 0;
}