#include<stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){

    int x = 10;
    int y = 20;
    // scanf("%d",&x);
    // int *p = NULL;
    //p = &x;
    // printf("%p\n", p);
    //printf("%d\n", *p); // 10
    //*p = 25;

    swap(&x,&y);
    printf("x = %d, y = %d\n", x, y);

    return 0;

}