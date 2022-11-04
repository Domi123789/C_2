#include <stdio.h>

int main()
{
    int i,n,j;
    int a[100], b[100];

    printf ("\n Unesi velicinu polja :");
    scanf ("%d", &n);

    printf ("Unesi %d elemenata polja: \n", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    for (j=0; j<n; j++)
    {
        b[j] = a[i];
    }

    printf ("Polje: \n", n);
    for (i=0; i<n; i++)
    {
        printf ("%d\t", a[i]);
    }

    return 0;
}
