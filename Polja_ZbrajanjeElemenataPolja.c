#include <stdio.h>

int main()
{
    int a[50], b[50], c[50], n;

    printf ("Velicina polja: \n");
    scanf ("%d", &n);

    printf ("Unesite %d elemenata prvog polja: \n", n);
    for (int i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    printf ("Unesite %d elemenata drugog polja: \n", n);
    for (int j=0; j<n; j++)
    {
        scanf ("%d", &b[j]);
    }

    printf ("Zbroj prvog i drugog polja: \n");
    for (int k=0; k<n; k++)
    {
        c[k]= a[k] + b[k];
        printf ("%d\t", c[k]);
    }

    return 0;
}
