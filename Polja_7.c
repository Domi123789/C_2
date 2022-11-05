#include <stdio.h>

int main()
{
    int i,n, najveci;
    int x[100];

    printf ("\n Unesi velicinu polja: ");
    scanf ("%d", &n);

    printf ("Unesi %d elemenata polja \n", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d", &x[i]);
    }

    najveci= x[0];

    for (i=1; i<n; i++)
    {
        if (x[i] > najveci)
        {
            najveci= x[i];
        }
    }

    printf ("Najveci je: %d \n", najveci);

    return 0;
}
