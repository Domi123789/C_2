#include <stdio.h>
#include <stdlib.h>

struct hornjaca{

    int zaobljenost_oklopa;
    int duzinaNogica;
    int brojPlocica;
    char ime[20]
    };

void NovaKornica(){

    int n;

    printf ("Kolikob novih kornjica\n");
    scanf ("%d", n);
    FILE* filePointer;
        filePointer = fopen("Hornjaca.txt", "a");
        for (int i=0; i<n; i++){

        fprintf(filePointer, "%s");
        fclose (filePointer);
    }
}

void maksimalnost(){

}

void minimalnost(){

}

void ispisanost(){

}

void exitiranje(){

}


int main()
{
    char odabir [20];

    do{
    printf ("-------------------------------------------------------\n");
    printf ("| 1. Unesi novu kornjacu                               |\n");
    printf ("| 2. Unesi max zaobljenost, duzinu nogu i broj plocica |\n");
    printf ("| 3. Unesi min zaobljenost, duzinu nogu i broj plocica |\n");
    printf ("| 4. Ispisati sve                                      |\n");
    printf ("| 5. Eggzit                                            |\n");
    printf ("-------------------------------------------------------\n");


    printf ("Odaberi broj od 1 do 5\n");
    scanf ("%d", odabir);
    if (strcmp(odabir, "1"))
        NovaKornica();
    else if (strcmp(odabir, "2"))
        maksimalnost();
    else if (strcmp(odabir, "3"))
        minimalnost();
    else if (strcmp(odabir, "4"))
        ispisanost();
    else if (strcmp(odabir, "5"))
        exitiranje();

    }while (strcmp(odabir, "5"));
}
