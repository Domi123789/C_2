#include <stdio.h>

void auta (int x1, int x2, float y1, float y2, int*koji, float*posto){

    float a1= (float) x1/y1;
    float a2= (float) x2/y2;

    if (a1 > a2)
    {
      *koji= 1;
      *posto= (a1/ a2)*100-100;
    }
    else if (a1 < a2)
    {
        *koji= 2;
        *posto= (a2/ a1)*100-100;
    }
    else
    {
        *koji= 0;
        *posto= 0;
    }

}

int main()
{
    int x1,x2,koji;
    float d,b,posto;

    printf ("Unesi cijenu dizela: \n");
    scanf ("%f", &d);
    printf ("Unesi cijenu benzina: \n");
    scanf ("%f", &b);
    printf ("Unesi km/l dizela: \n");
    scanf ("%d", &x1);
    printf ("Unesi km/l benzina: \n");
    scanf ("%d", &x2);

    auta(x1,x2,d,b,&koji,&posto);
    printf ("%d. je bolji za %f posto", koji,posto);

    return 0;
}
