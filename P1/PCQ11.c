#include <stdio.h>

int main()
{

    int size;
    int arr[10];
    int pos_count = 0;
    printf("Enter The size of array\n");
    scanf("%d", &size);
    printf("Enter the Elements of array\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);

        if (arr[i] >= 0)
        {
            pos_count++;
        }
        else
        {
            
        }
    }

    printf("The total positive numbers is %d\n", pos_count);
    

    return 0;
}