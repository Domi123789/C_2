#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <string.h>

struct avion{
    int krila;
    int brzina;
    int visina;
    char ime [20];
}a;

void unos()
{
	FILE * fp;
	fp=fopen("avijon.txt","a");


	printf("\nUnesi broj krila aviona:\t");
	scanf("%d", &a.krila);
	printf("\nUnesi njegovu brzinu:\t");
	scanf("%d",&a.brzina);
	printf("\nDo koje visine max ide\t");
	scanf("%d", &a.visina);
	printf("\nUnesi ime avioncica:\t");
	scanf("%s", a.ime);


	fprintf(fp,"%d\t%d\t%d\t%s\n",a.krila, a.brzina, a.visina, a.ime);
	fclose(fp);

}

void ispis(){

	FILE * fp;
	fp = fopen("avijon.txt", "r");

	while(fscanf(fp,"%d %d %d %s",&a.krila, &a.brzina, &a.visina, a.ime)==4)
	printf("%d\t%d\t%d\t%s\n",a.krila, a.brzina, a.visina, a.ime);

	fclose(fp);
}

void maxImin(){
    FILE * fp;
	fp = fopen("avijon.txt", "r");
    struct avion temp={0,0,0,"jaSam"};
    while(fscanf(fp,"%d %d %d %s",&a.krila, &a.brzina, &a.visina, a.ime)==4){
        if (a.brzina>temp.brzina)
           temp=a;

}
 printf("%d\t%d\t%d\t%s\n",temp.krila, temp.brzina, temp.visina, temp.ime);
fclose(fp);
fp = fopen("avijon.txt", "r");
     while(fscanf(fp,"%d %d %d %s",&a.krila, &a.brzina, &a.visina, a.ime)==4){
        if (a.brzina<temp.brzina)
           temp=a;

}
 printf("%d\t%d\t%d\t%s\n",temp.krila, temp.brzina, temp.visina, temp.ime);
}




void filter(){

	FILE * fp;
	fp = fopen("avijon.txt", "r");
    int brzinaa=0;
    printf  ("Do koje brzine\n");
    scanf ("%d",&brzinaa);
	printf("\n");
			while(fscanf(fp,"%d %d %d %s",&a.krila, &a.brzina, &a.visina, a.ime)==4){
                if (brzinaa>a.brzina)
                    printf("%d\t%d\t%d\t%s\n",a.krila, a.brzina, a.visina, a.ime);}

        fclose(fp);
	}

int main()
{
    int odg;
	do{
		printf("\t1. Unos\t\n\t2. Ispis\t\n\t3. maximum I minimum\t\n\t4. filteri\t\n\t5. Exit\n ");
		printf("Molim te koristi brojeve za odabir!! \n");
		scanf("%d",&odg);

		switch(odg){
			case 1: unos();
			break;
			case 2: ispis();
			break;
			case 3: maxImin();
			break;
			case 4: filter();
			break;
			case 5: //exit;
			break;
			default:
				printf("de pise ti od 1 do 5");
		}
	} while(odg!=5);

}
