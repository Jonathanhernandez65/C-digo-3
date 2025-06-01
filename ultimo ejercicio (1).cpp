#include <stdio.h>
#include <string.h>

int main(){
int len;
char origen[40];
scanf("%s",&origen);
char destino[13];
scanf("%s",&destino);
char hola[50];
strcpy (hola, origen);
strcpy (hola, destino);
printf ("palabra1: %s \n ",destino);

printf ("palabra2: %s",origen);

return 0;
}