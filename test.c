#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXLEN 256
#define MAXN 100




char name[MAXN][MAXLEN];
char nachname[MAXN][MAXLEN];
char strasse[MAXN][MAXLEN];
int* hausnummer[MAXN];
char ort[MAXN][MAXLEN];
int* plz [MAXN];
int i = 0;



void input (){
    printf("Gebe deinen Namen ein: ");
    scanf("%s", &name[i]);
    printf("Gebe deinen Nachname ein: ");
    scanf("%s", &nachname[i]);
    printf("Gebe deine Starsse ein: ");
    scanf("%s", &strasse[i]);
    printf("Gebe deine Hausnummer ein: ");
    scanf("%i", &hausnummer[i]);
    printf("Gebe deine ort ein: ");
    scanf("%s", &ort[i]);
    printf("Gebe deine PLZ ein: ");
    scanf("%i", &plz[i]);

    i++;
    return;
}

void output (){

    printf("\n");

    printf("Name: %s", name[i]);
    printf("\t");
    printf("Last Name: %s", nachname[i]);
    printf("\t");
    printf("street: %s", strasse[i]);
    printf("\t");
    printf("postnumber: %i", hausnummer[i]);
    printf("\t");
    printf("Region: %s", ort[i]);
    printf("\t");
    printf("postcode: %i", plz[i]);
    printf("\t");

    printf("\n");

    return;

}

void delete (){

    strcpy(nachname[i], "");

    strcpy(strasse[i], "");
    hausnummer[i] = NULL;
    strcpy(ort[i], "");
    plz[i] = NULL;
    return;
}

void main (){

    int b = 1;
    int c;

    while (b == 1) {

        printf("\n");

        printf("Select following things \n");
        printf("Choice 1: ADD \n");
        printf("Choice 2: SHOW\n");
        printf("Choice 3: DELETE\n");
        printf("Press 0 for exit: \n");

        scanf("%i", &c);

        if (c == 1){
            input();
        }
        else if (c == 2){
            printf("Please give your identy number in: ");
            scanf("%i", &i);
            output();
        }
        else if(c == 3){
            printf("select your identy number");
            scanf("%i", &i);
            delete();

        }}
    }
