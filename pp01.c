#include<stdio.h>
int main()
{
    float n,a,b,c;
    scanf("%f",&n);
    if(n==1)
    {
        printf("Enter a & b::");
        scanf("%f,%f",&a,&b);
        c = a + b;
        printf("%.2f",c);
    }
   else  if(n==2)
    {
        printf("Enter a & b::");
        scanf("%f,%f",&a,&b);
        c = a - b;
        printf("%.2f",c);
    }
   else if(n==3)
    {
        printf("Enter a & b::");
        scanf("%f,%f",&a,&b);
        c = a * b;
        printf("%.2f",c);
    }
 else if(n=4)
    {
        printf("Enter a & b::");
        scanf("%f,%f",&a,&b);
        c = a /b;
        printf("%.2f",c);
    }
    else
    {
        printf("Out of range");
    }




    return 0;
}
