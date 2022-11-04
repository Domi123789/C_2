#include <stdio.h>

int main()
{
    int i;
    int x[]= {1,3,6,8,4,5};

    printf ("Elementi polja su: \n");
    for (i=0; i<6; i++)
    {
        printf ("%d\t", x[i]);
    }

    return 0;
}
