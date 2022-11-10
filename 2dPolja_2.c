#include <stdio.h>

int main()
{
    int x[50][50], row, col;
    int i,j;

    printf ("Unesi red: \n");
    scanf ("%d", &row);
    printf ("Unesi stupac: \n");
    scanf ("%d", &col);
    printf ("Unesi %d integer value: \n", row*col);

    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            scanf ("%d", &x[i][j]);
        }
    }

    printf ("Elementi polja: \n");
    for (i=0; i<row; i++)
    {
        for (j=0; j<col; j++)
        {
            printf ("%d", x[i][j]);
        }
        printf ("\n");
    }
}
