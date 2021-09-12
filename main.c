#include <stdio.h>
#include <stdlib.h>
#include "oglas.h"

int main()
{
    Oglas niz[100];
    int n=0;
    int opcija;
    while(1){
        printf("\n1 - Unos sa tastature");
        printf("\n2 - Unos iz fajla");
        printf("\n3 - Ispis na ekran");
        printf("\n4 - Ispis u fajl");
        printf("\n5 - Pretraga po poziciji:");
        printf("\n6 - Pretraga po vrsti angazmana i iskustvu:");
        printf("\n7 - Pretraga po pocetnoj plati:");
        printf("\n8 - Pretraga po ceni rada:");
        printf("\n0 - IZLAZ");
        printf("\nVAS IZBOR: ");
        scanf("%d", &opcija);
        if(opcija == 0)
            break;
        switch(opcija){
            case 1:{
                unesiOglas(niz, &n);
                break;
            }
            case 2:{
                break;
            }
            case 3:{
                ispisiSveOglase(niz, n);
                break;
            }
            case 4:{
                snimiUFajl(niz, n);
                break;
            }
            case 5:{
                pretragaPozicija(niz, n);
                break;
            }
            case 6:{
                pretragaVrstiIIskustvu(niz, n);
                break;
            }
            case 7:{
                pretragaPlata(niz, n);
                break;
            }
            case 8:{
                pretragaPoSatu(niz, n);
                break;




            }
        }
    }

    return 0;
}



