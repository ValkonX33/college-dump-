#include <stdio.h>
#include<conio.h>
int fib(int i)
{
    if (i <= 1)
    {
        return 0;
    }
    else if (i == 2)
    {
        return 1;
    }
    else
    {
        int result;
        return result = (fib(i - 1) + fib(i - 2));
    }
}
int main()
{
    int i;
    
    printf("The fibonacci series is\n");
    for (i = 0; i<10; i++)
    {
        printf("%d", fib(i));
    }
   
}