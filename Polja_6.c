#include <stdio.h>

int main()
{
    int i, n, element, lokacija;
    int x [100];

    printf ("\n Unesi velicinu polja: ");
    scanf ("%d", &n);

    printf ("Unesi %d elemenata polja: \n", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d", &x[i]);
    }

    printf ("Unesi lokaciju za izbrisati element: ");
    scanf ("%d", &lokacija);

    if (lokacija > n)
        printf ("Uklanjanje nije moguce \n");
    else
    {
        element= x[lokacija-1];

        for (i=lokacija-1; i<n-1; i++)
        {
            x[i]= x[i+1];
        }

        printf ("\n Uklonjeni element je: %d \n", element);
        printf ("\n Elementi polja nakon uklanjanja: \n", n);
        for (i=0; i<n-1; i++)
        {
            printf ("%d\t", x[i]);
        }
    }

    return 0;
}
