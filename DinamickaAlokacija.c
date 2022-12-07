#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;
    printf ("Enter number of elements: ");
    scanf ("%d", &n);
    printf ("Enterd number of elements: %d\n", n);
    ptr= (int*) malloc (n*sizeof(int));
}
