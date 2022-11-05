#include <stdio.h>

int main()
{
    int i,j,n;;
    int a[100], b[100];

    printf ("\n Unesi velicinu polja: ");
    scanf ("%d", &n);

    printf ("Unesi %d elemenata polja \n", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    for (i=n-1, j=0; i>=0; i--)
    {
        b[j] = a[i];
        j++;
    }

    printf ("Obrnuto: \n", n);
    for (i=0; i<n; i++)
    {
        printf ("%d\t", b[i]);
    }

    return 0;
}
