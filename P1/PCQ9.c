#include<stdio.h>

int main(){
    int i=77;
    int *ptr;
    int **ptr2;
    ptr= &i;
    ptr2=&(ptr);
    printf("The vaue of i is %d\n", **ptr2);
    printf("The adress of i is %u\n", ptr);
    printf("The adress of ptr is %u", ptr2);
    return 0;
}