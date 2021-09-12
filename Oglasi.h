#ifndef OGLASI_H_INCLUDED
#define OGLASI_H_INCLUDED
#ifndef OGLAS_H_INCLUDED
#define OGLAS_H_INCLUDED

#include<string.h>

typedef struct oglas{
    char kompanija[20];
    char pozicija[20];
    char iskustvo[20];
    int plata;
    char vrsta[20];
    int radnoVreme;
}Oglas;



void ispisiSveOglase(Oglas niz[], int n);
void snimiUFajl(Oglas niz[], int n);
void pretragaPozicija(Oglas niz[], int n);
void pretragaVrstiIIskustvu(Oglas niz[], int n);
void pretragaPlata(Oglas niz[], int n);
void pretragaPoSatu(Oglas niz[], int n);



#endif // OGLASI_H_INCLUDED
