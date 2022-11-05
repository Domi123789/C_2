#include <stdio.h>

int main()
{
    int i,j,n,temp;
    int a[100];

    printf ("\n Unesi velicinu polja: ");
    scanf ("%d", &n);

    printf ("Unesi %d elemenata polja \n", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    for (i=1; i<=n; i++)
    {
        for (j=i; j>0; j--)
        {
            if (a[j] < a [j-1])
            {
                temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }

    printf ("Niz nakon sortiranja: \n", n);
    for (i=0; i<n; i++)
    {
        printf ("%d\t", a[i]);
    }

    return 0;
}
