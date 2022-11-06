#include <stdio.h>

int suma (int a[], int n){

    int sum, i;
    for (int i=0; i<n; i++) sum+=a[i];
    return sum;
}
int main()
{
    int i, n, zbroj;
    int a[1000];

    printf ("\n Unesi velicinu polja: ");
    scanf ("%d", &n);

    printf ("Unesi %d elemenata polja: \n", n);
    for (i=0; i<n; i++)
    {
        scanf ("%d", &a[i]);
    }

    printf ("%d", suma(a, n));
}
