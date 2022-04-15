#include<stdio.h>

int main(){
    // int a = 16;
    // int *ptr= &a;
    // ptr = ptr+2;
    // printf("The value of ptr is %u\n", ptr);
         
     int a = 7; int b = 5;
     int *ptr = &a;
     int *ptr2 = &b;
     int *ptr3 = (*ptr) - (*ptr2);
     ptr++;
     ptr2++;
     ptr3++;
     printf("The value of of ptr is %u\n", ptr);
     printf("The vlaue of ptr2 is %u\n", ptr2);
     printf("The vlaue of ptr3 is %u\n", ptr3);
     

    
    return 0;
}