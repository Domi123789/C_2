#include <stdio.h>

int main()
{
    int i;
    float x[5];
    float avg, sum=0;

    printf ("Unesite ocjene 5 predmeta: \n");
    for (i=0; i<5; i++)
    {
        scanf ("%f", &x[i]);
        sum = sum + x[i];
    }

    avg = sum / 5;

    printf ("Prosjek ocjena je: %.2f\n", avg);

    return 0;
}
