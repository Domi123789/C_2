#include <stdio.h>

int main()
{
    int i,n, najmanji;
    int x[100];

    printf ("\n Unesi velicinu polja: ");
    scanf ("%d", &n);

    printf ("Unesi %d elemenata polja \n", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d", &x[i]);
    }

    najmanji= x[0];

    for (i=1; i<n; i++)
    {
        if (x[i] < najmanji)
        {
            najmanji= x[i];
        }
    }

    printf ("Najmanji je: %d \n", najmanji);

    return 0;
}
