
void unesiOglas(Oglas niz[], int* n){
    getchar();
    Oglas o;
    printf("Unesi naziv kompanije: ");
    gets(o.kompanija);
    printf("Unesi naziv pozicije: ");
    gets(o.pozicija);
    printf("Unesi radno iskustvo: ");
    gets(o.iskustvo);
    printf("Unesi vrstu angazmana: ");
    gets(o.vrsta);
    printf("Unesi platu: ");
    scanf("%d", &o.plata);
    printf("Unesi radno vreme u satima: ");
    scanf("%d", &o.radnoVreme);
    niz[*n] = o;
    (*n)++;
}

void ispisiSveOglase(Oglas niz[], int n){
    printf("\nSvi oglasi:");
    for(int i=0; i< n; i++)
        printf("\n%s %s %s %d %s %d", niz[i].kompanija, niz[i].pozicija, niz[i].iskustvo, niz[i].plata,niz[i].vrsta,  niz[i].radnoVreme);
}

void snimiUFajl(Oglas niz[], int n){
    FILE *f = NULL;
    f = fopen("oglasi.txt", "w");
    if(f == NULL)
        return;
    for(int i=0; i< n; i++){
        fprintf(f,"%s\n%s\n%s\n%d\n%s\n%d", niz[i].kompanija, niz[i].pozicija, niz[i].iskustvo, niz[i].plata,niz[i].vrsta,  niz[i].radnoVreme);
        if(i != n-1)
            fprintf(f, "\n");
    }
    fclose(f);
}

void pretragaPozicija(Oglas niz[], int n){
    getchar();
    char pozicija[20];
    printf("\nUnesi naziv pozicije za pretragu: ");
    gets(pozicija);
    for(int i=0; i<n; i++)
        if(!strcmp(pozicija, niz[i].pozicija))
            printf("\n%s %s %s %d %s %d", niz[i].kompanija, niz[i].pozicija, niz[i].iskustvo, niz[i].plata,niz[i].vrsta,  niz[i].radnoVreme);
}

void pretragaVrstiIIskustvu(Oglas niz[], int n){
    getchar();
    char vrsta[20];
    char iskustvo[20];
    printf("\nUnesi vrstu anganzmana: ");
    gets(vrsta);
    printf("\nUnesi iskustvo: ");
    gets(iskustvo);
    for(int i=0; i<n; i++)
        if(!strcmp(iskustvo, niz[i].iskustvo) && !strcmp(vrsta, niz[i].vrsta))
            printf("\n%s %s %s %d %s %d", niz[i].kompanija, niz[i].pozicija, niz[i].iskustvo, niz[i].plata,niz[i].vrsta,  niz[i].radnoVreme);
}


void pretragaPlata(Oglas niz[], int n){
    int plata;
    printf("\nUnesi pocetnu platu: ");
    scanf("%d", &plata);
    for(int i=0; i<n; i++)
        if(niz[i].plata > plata)
            printf("\n%s %s %s %d %s %d", niz[i].kompanija, niz[i].pozicija, niz[i].iskustvo, niz[i].plata,niz[i].vrsta,  niz[i].radnoVreme);
}

void pretragaPoSatu(Oglas niz[], int n){
    float cena;
    printf("\nUnesi cenu rada po satu: ");
    scanf("%f", &cena);
    for(int i=0; i<n; i++)
        if( (niz[i].plata*1.0)/(4*niz[i].radnoVreme)> cena)
            printf("\n%s %s %s %d %s %d", niz[i].kompanija, niz[i].pozicija, niz[i].iskustvo, niz[i].plata,niz[i].vrsta,  niz[i].radnoVreme);
}

