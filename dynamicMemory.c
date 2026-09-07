#include<stdio.h>
#include<stdlib.h>
int main(){

    int *p;

    p = (int*) malloc(sizeof(int));

    if (p == NULL)
    {
        printf("Memory Allocation Failed\n");
        return 1;
    }
    

    *p = 25;
    printf("%d\n",*p);


    return 0;
}