#include <stdio.h>
#include <math.h>
int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else return n + Sum(n - 1);
}       
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    printf("The sum of first n numbers is%d", Sum(n));
}