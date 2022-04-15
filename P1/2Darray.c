#include<stdio.h>

int main(){
    int students =2, subjects=3;
    int arr[2][3];
    
    for (int i = 0; i < students; i++)
    {
     for (int  j = 0; j < subjects; j++)
     {
        printf("Enter the marks of the students %d in %d subject\n ", i+1, j+1);
        scanf("%d", &arr[i][j]);
     }

     
    }
    for (int i = 0; i < students; i++)
    {
     for ( int j = 0; j < subjects; j++)
     {
        printf(" the marks of the students %d in %d subject is %d\n", i+1, j+1, arr[i][j]);

     }
    }
    return 0;
}