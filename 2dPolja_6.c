#include <stdio.h>

int main()
{
    int arr_first [2][2]= {{1,2}, {3,4}};
    int arr_second [2][2]={{1,2},{3,4}};
    int arr_third [2][2];
    int i,j,k,sum;

    printf ("Prvo arr: \n");
    for (i=0; i<=1; i++)
    {
        for (j=0; j<=1; j++)
        {
            printf ("%d", arr_first[i][j]);
        }
        printf ("\n");
    }
    printf ("Drugo arr: \n");
    for (i=0; i<=1; i++)
    {
        for (j=0; j<=1; j++)
        {
            printf ("%d", arr_second[i][j]);
        }
        printf ("\n");
    }

    printf ("Umnozak prvog i drugog niza: \n");
    for (i=0; i<=1; i++)
    {
        for (j=0; j<=1; j++)
        {
            sum= 0;
            for (k=0; k<= 1; k++)
            {
                sum= sum + arr_first[i][k]*arr_second[k][j];
            }
            arr_third[i][j]= sum;
            printf ("%d ", arr_third[i][j]);
        }
        printf ("\n");
    }
}
