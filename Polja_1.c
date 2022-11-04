#include <stdio.h>

int main()
{
    int i;
    int x[5];

    printf ("Unesi elemente polja: \n");
    for (i=0; i<5; i++)
    {
        scanf ("%d", &x[i]);
    }

    printf ("Elementi polja su: \n");
    for (i=0; i<5; i++)
    {
        printf ("%d\t", x[i]);
    }

    return 0;
}
