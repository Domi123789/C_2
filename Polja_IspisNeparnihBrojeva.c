#include <stdio.h>

int main()
{
    int a[100], n;

    printf ("Velicina polja: \n");
    scanf ("%d", &n);

    printf ("Unesite %d elemenata polja: \n", n);
    for (int i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    printf ("Polje: \n");
    for (int j=0; j<n; j++)
        printf ("%d\t", a[j]);

    printf ("\nNeparni brojevi navedenog niza: \n");
    for (int k=0; k<n; k++)
    {
        if (a[k]%2!=0)
            printf ("%d\t", a[k]);
    }

    return 0;
}
