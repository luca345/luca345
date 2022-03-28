#include <stdio.h>
int main (void){
    printf ("Hola, cual es tu nombre?\n");
    char nombre [20];
    scanf("%s",&nombre);
    printf ("Bienvenido %s\n",nombre);
    return 0;
}