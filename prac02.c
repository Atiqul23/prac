#include<stdio.h>
#include<string.h>
int main(){
    char a[20] = "hello ";
    // printf("%s's length: %zu\n",a,strlen(a));
    char b[] = "aworld";

    char *p = a;

    // int p = strcmp(b,a);

    printf("%c\n",*(p+21));

    return 0;
}