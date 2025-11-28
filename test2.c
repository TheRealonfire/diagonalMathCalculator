#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXN 100
#define MAXLEN 256

char firstname [MAXN] [MAXLEN] = { " " };
char lastname [MAXN] [MAXLEN] = { " " };
char street [MAXN] [MAXLEN] = { " " };
char region [MAXN] [MAXLEN] = { " " };
int housenumber [MAXN] = { 0 };
int postalcode [MAXN] = { 0 }; 
int i = 1;

void entry (){
  
  printf("First Name: ");
  scanf("%s", &firstname[i]);
  
  printf("Last Name: ");
  scanf("%s", &lastname[i]);

  printf("Street: ");
  scanf("%s", &street[i]);

  printf("Housenumber: ");
  scanf("%i", &housenumber[i]);

  printf("Region: ");
  scanf("%s", &region[i]);

  printf("Postalcode: ");
  scanf("%i", &postalcode[i]);

  i++;

  return;
}

int delete(int si){
    strcpy(firstname[si], "");
    strcpy(lastname[si], "");
    strcpy(street[si], "");
    strcpy(region[si], "");
    housenumber[si] = 0;
    postalcode[si] = 0;

  return 0;
}

int change(int si){
    
  printf("First Name: ");
  scanf("%s", &firstname[si]);
  
  printf("Last Name: ");
  scanf("%s", &lastname[si]);

  printf("Street: ");
  scanf("%s", &street[si]);

  printf("Housenumber: ");
  scanf("%i", &housenumber[si]);

  printf("Region: ");
  scanf("%s", &region[si]);

  printf("Postalcode: ");
  scanf("%i", &postalcode[si]);

  return 0;
}

int show(int si){
  printf("Name: %s\n", firstname[si]);
  printf("Last Name: %s\n", lastname[si]);
  printf("Street: %s\n", street[si]);
  printf("Housenumber: %i\n", housenumber[si]);
  printf("Region: %s\n", region[si]);
  printf("Postalcode: %i\n", postalcode[si]);

  return 0;
}

int search(){
  
}

int database(){


}

void main(){
  //Option
  int loop = 0;
  int co = 0; //output
  int si; // searchindex

  while (loop == 0){
  
    printf("-----------------------------------------------------\n");
    printf("OPTION: \n");
    printf("1. ADD\n");
    printf("2. DELETE\n");
    printf("3. CHANGE\n");
    printf("4. OUTPUT USER\n");
    printf("5. SEARCH\n");
    printf("6. DATABASE\n");
    printf("0. END\n");
    printf("-----------------------------------------------------\n");
    printf("Option: ");
    scanf("%i", &co);
    
    printf("\n");

    if (co == 0)
      break;

    else if (co == 1){
      entry();
    }
    
    else if (co == 2){
      printf("Please enter your ID: ");
      scanf("%i", &si);
      delete(si);
      
      
    }
    
    else if(co == 3){
        printf("Please give your ID ");
        scanf("%i", &si);
        change(si);
    }

    else if(co == 4){
      printf("please give your ID: ");
      scanf("%i", &si);
      show(si);
    }
  
    else if(co == 5){

    }
  }


}
