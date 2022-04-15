// we know that we can convert celcius into farenhit by using the formuale °F = (°C × 9/5) + 32
#include <stdio.h>
float conversion(float c);
int main()
{
    float f, c;
    printf("Enter your tempreture in celcius\n");
    scanf("%f", &c);
    printf("The value in farhenhiet is %.2f\n", conversion(c));
}
    float conversion(float c)
    {
        
        return  ((c * 9) / 5) + 32;
    }
