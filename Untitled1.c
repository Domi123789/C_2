#include <stdio.h>
#include <stdlib.h>


struct zvijezda {
    int stupnjevi;
    char boja [50];
    float velicina;
    float svjetlosni_tok;
    float udaljenost;
};

int main()
{

    int stupnjevi;
    char boja [50];
    float velicina;
    float svjetlosni_tok;
    float udaljenost;

    struct zvijezda z1;

    printf ("Unesi Rainkenove stupnjeve prve zvijezde: ");
    scanf ("%d", &z1.stupnjevi);

    printf ("Koja je boja prve zvijezde: ");
    printf ("Mozes odabrati:")
    printf ("1." + "Zuta");
    printf ("2." + "Plava");
    printf ("3." + "Zelena");
    printf ("4." + "Crvena");
    scanf ("%s", z1.boja);


    printf ("Koje je velicine prva zvijezda: ");
    scanf ("%f", &z1.velicina);
    printf ("Unesi svjetlosni tok prve zvijezde: ");
    scanf ("%f", &z1.svjetlosni_tok);
    printf ("Kolika je udaljenost prve zvijezde: ");
    scanf ("%f", &z1.udaljenost);




    struct zvijezda z2;

    printf ("Unesi Rainkenove stupnjeve druge zvijezde: ");
    scanf ("%d", &z2.stupnjevi);
    printf ("Koja je boja druge zvijezde: ");
    scanf ("%s", z2.boja);
    printf ("Koje je velicine druge zvijezda: ");
    scanf ("%f", &z2.velicina);
    printf ("Unesi svjetlosni tok druge zvijezde: ");
    scanf ("%f", &z2.svjetlosni_tok);
    printf ("Kolika je udaljenost druge zvijezde: ");
    scanf ("%f", &z2.udaljenost);



    struct zvijezda z3;

    printf ("Unesi Rainkenove stupnjeve trece zvijezde: ");
    scanf ("%d", &z3.stupnjevi);
    printf ("Koja je boja trece zvijezde: ");
    scanf ("%s", z3.boja);
    printf ("Koje je velicine trece zvijezda: ");
    scanf ("%f", &z3.velicina);
    printf ("Unesi svjetlosni tok trece zvijezde: ");
    scanf ("%f", &z3.svjetlosni_tok);
    printf ("Kolika je udaljenost trece zvijezde: ");
    scanf ("%f", &z3.udaljenost);

    float rez1 = z1.stupnjevi/z1.udaljenost;
    float rez2 = z2.stupnjevi/z2.udaljenost;
    float rez3 = z3.stupnjevi/z3.udaljenost;

    printf ("Zvijezda 1: %.2f", rez1);
    printf ("Zvijezda 2: %.2f", rez2);
    printf ("Zvijezda 3: %.2f", rez3);

    float rezz1 = rez1 - 0.000069;
    float rezz2 = rez2 - 0.000069;
    float rezz3 = rez3 - 0.000069;

    if (rezz1 > rezz2 || rezzl > rezz3){
        printf ("Odaberemo zvijezdu 1");
        printf ("Boja je %s", &boja);
        printf ("Velicina je %f", &velicina)
        printf ("Svjetlosni tok je %f", &svjetlosni_tok);
        printf ("Udaljenost je %f", &udaljenost);
    }

    else if (rezzl2 > rezzl || rezzl2 > rezzl3){
        printf ("Odaberemo zvijezdu 2");
        printf ("Boja je %s", &boja);
        printf ("Velicina je %f", &velicina)
        printf ("Svjetlosni tok je %f", &svjetlosni_tok);
        printf ("Udaljenost je %f", &udaljenost);
    }

    else if (rezzl3 > rezzl || rezzl3 > rezzl2){
        printf ("Odaberemo zvijezdu 3");
        printf ("Boja je %s", &boja);
        printf ("Velicina je %f", &velicina)
        printf ("Svjetlosni tok je %f", &svjetlosni_tok);
        printf ("Udaljenost je %f", &udaljenost);
    }

    else if (rezzl == rezzl2 || rezzl == rezzl3){
       if(!strcmp(z1.boja, "zuta")|!strcmp(z1.boja, "crvena"));
       printf ("Najpovoljnija je zuta zvijezda");
       else if (!strcmp (z1.boja, "crvena"|!strcmp(z1.boja, "zuta")))
       printf ("Najpovoljnija je crvena zvijezda");








    }





    return 0;

}
