#include <stdio.h>

int main()
{
    int prvo_polje[50], drugo_polje [50], trece_polje [100], n, i;

    printf ("Velicina polja: \n");
    scanf ("%d", &n);

    printf ("Unesite %d elemenata prvog polja: \n", n);
    for (int i=0; i<n; i++)
    {
        scanf ("%d", &prvo_polje[i]);
    }

    printf ("Unesite %d elemenata drugog polja: \n", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d", &drugo_polje[i]);
    }

    printf ("\n Nakon spajanja, trece polje izgleda ovako: \n");
    for (i=0; i<n*2; i++)
    {
        if (i<n)
            trece_polje[i]= prvo_polje[i];
        else
            trece_polje[i]= drugo_polje[i-n];
        printf ("%d\t", trece_polje[i]);
    }

    return 0;
}
