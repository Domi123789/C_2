#include <stdio.h>

int main()
{
    int arr [2][2]= {{5,5}, {9,9}};
    int i,j;

    printf ("Arr: \n");
    for (i=0; i<=1; i++)
    {
        for (j=0; j<=1; j++)
        {
            printf ("%d", arr[i][j]);
        }
        printf ("\n");
    }

    printf ("Transpose of Array is given below: \n");
    for (i=0; i<=1; i++)
    {
        for (j=0; j<=1; j++)
        {
            printf ("%d", arr[j][i]);
        }
        printf ("\n");
    }
}
