#include<stdio.h>
#include<stdlib.h>
int main(){

    int n;
    printf("Enter size: ");
    scanf("%d",&n);

    int *arr = malloc(n * sizeof *arr);

    if (arr == NULL){
        printf("Dynamic memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    free(arr);


    return 0;
}