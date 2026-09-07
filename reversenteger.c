#include<stdio.h>

int main(){

    int n = 1234,result = 0,rem;

    while (n>0)
    {
        rem = n%10;
        n/=10;
        result = result*10+rem;
    }
    
    printf("%d\n",result);

    return 0;
}