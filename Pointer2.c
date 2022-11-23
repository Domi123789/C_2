#include <stdio.h>


void trazi(int *min, int *max, int *a){

    int i,najveci= a[0];

    for (i=1; i<6; i++)
    {
        if (a[i] > najveci)
        {
            najveci= a[i];
        }
    }
    *max=najveci;


    int najmanji= a[0];

    for (i=1; i<6; i++)
    {
        if (a[i] < najmanji)
        {
            najmanji= a[i];
        }
    }
    *min=najmanji;
}

int main()
{
    int a[6], min=0, max, i, najveci, najmanji;

    printf ("Unesi elemente polja \n", a);

    for (i=0; i<6; i++)
    {
        scanf ("%d", &a[i]);
        max=a[i];
    }
    trazi(&min,&max,&a[0]);
    printf ("Najveci je %d, a najmanji %d",max,min );

    return 0;



}
