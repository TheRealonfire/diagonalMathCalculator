#include <stdio.h>
#include <string.h>
#include <ctype.h>
#Define MAXLEN 256
#Define MAXN 100




    char name[MAXN][MAXLEN];
    char nachname[MAXN][MAXLEN];
    char strasse[MAXN][MAXLEN];
    int hausnummer[MAXN];
    char ort[MAXN][MAXLEN];
    int plz [MAXN];



void input (int i){
    printf("Gebe deinen Namen ein: ");
    scanf("%s", &name[i]);
    printf("Gebe deinen Nachname ein: ");
    scanf("%s", &nachname[i]);
    printf("Gebe deine Starsse ein: ");
    scanf("%s", &strasse[i]);
    printf("Gebe deine Hausnummer ein: ");
    scanf("%i", &Hausnummer[i]);
    printf("Gebe deine ort ein: ");
    scanf("%s", &ort[i]);
    printf("Gebe deine PLZ ein: ");
    scanf("%i", &plz[i]);

    i++
}

void output (int i){

    printf("Name: %s", name[i]);
    printf("\t");
    printf("Name: %s", nachname[i]);
    printf("\t");
    printf("Name: %s", strasse[i]);
    printf("\t");
    printf("Name: %i", hausnummer[i]);
    printf("\t");
    printf("Name: %s", ort[i]);
    printf("\t");
    printf("Name: %i", PLZ[i]);
    printf("\t");



}

void delete (int i){

}

void main (){

    while (bool == 1) {
        printf("Select following things ");
        prtintf("Choice 1: ADD")
        prtintf("Choice 2: SHOW")
        prtintf("Choice 3: DELETE")

        scanf("%i", &c);



    }

    return 0;
}
    /*for (int n = 0; n < i; n++) {

    }*/
