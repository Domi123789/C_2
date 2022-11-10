#include <stdio.h>

int main()
{
    int x[3][3]= {{7,8,9},{1,2,3},{4,5,6}};
    int i,j;

    printf ("Elementi niza: \n");
    for (i=0; i<=2; i++)
    {
        for (j=0; j<=2; j++)
        {
            printf ("%d", x[i][j]);
        }
        printf ("\n");
    }
}
