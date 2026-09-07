#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int *p =  malloc(n*sizeof(int));

    if (p == NULL){
        printf("Dynamic memory allocation failed");
        return 1;
    }

    for(int i = 0; i<n; i++){
        scanf("%d",&p[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ",p[i]);
    }

    free(p);
    


    return 0;
}