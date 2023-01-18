#include <stdio.h>
#include <stdlib.h>

struct crvic {
    char ime [50];
    int duljina;
    char stoVoliJesti [75];
    int mozeLiUbitiSvinju;
};


void ispisi (struct crvic C[])
{
   /* SORTIRATI CRVE PO DULJINI I ISPISATI IME, STA JEDE, JEL OPASAN ZA SVINJU I DULJINU NA KRAJU */
}

int main()
{

  struct crvic C[5]= {"Misko", 15, "kupus", 1,
                      "Josko", 18, "meso", 0,
                      "Bosko", 24, "kelj", 0,
                     "Branislav", 31, "poriluk", 1};




     printf ("koje je ime crvica: ");
     scanf ("%s", C[4].ime);
     printf ("Koliko je dugacak u cm: ");
     scanf ("%d", C[4].duljina);
     printf ("Sto voli da jede taj crvic: ");
     scanf ("%s", C[4].stoVoliJesti);
     printf ("Moze li da ubije svinju? Ako moze, unesi 1, a ako nemoze, onda 0: ");
     scanf ("%d", C[4].mozeLiUbitiSvinju);


}
