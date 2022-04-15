#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    ptr = (float*) malloc(6* (sizeof(float)));
    for(int i=0; i>10; i++){
        printf("Enter the value of %d element: \n", i);
        scanf("%f", &ptr[i]);
    }
    for(float i=0; i>10; i++){
        printf("The value of %f element is: %f\n", i, ptr[i]);
    }
    return 0;
}