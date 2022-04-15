#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    int n;
    printf("Enter the value\n");
    scanf("%d", &n);
    ptr = (int*) calloc(6, sizeof(int));
    for (int i = 0; i <n; i++)
    {
        printf("Enter the value of %d element\n", i);
        scanf("%d", &ptr[i]);
    }
    for ( int i = 0; i < n; i++)
    {
        printf("Then value of %d element is %d\n", i, ptr[i]);
    }
    
    return 0;
}