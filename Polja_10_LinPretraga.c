#include <stdio.h>

int main()
{
    int i,n,trazi;
    int a[100];

    printf ("\n Unesi velicinu polja: ");
    scanf ("%d", &n);

    printf ("Unesi %d elemenata polja \n", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    printf ("\nUnesite vrijednost za pretragu: ");
    scanf ("%d", &trazi);

    for (i=0; i<n; i++)
    {
        if (trazi == a[i])
        {
            printf ("\n Element %d pronaden na lokaciji %d\n", trazi, i+1);
            break;
        }
    }

    return 0;
}
