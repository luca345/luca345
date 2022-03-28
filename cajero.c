#include <stdio.h>

int main (void){
    
    int monto = 0;
    
    int billete1 = 0;
    int billete5 = 0;
    int billete10 = 0;
    int billete20 = 0;
    int billete50 = 0;
    int billete100 = 0;

    printf("Selecciona el monto: ");
    scanf ("%d",&monto);

    if (monto < 20){
        printf("El monto es minimo es 20");
        return 1;
    }
    else if (monto > 5000){
        printf("El monto maximo es 5000");
        return 2;
    }
    else {
        printf("Monto aceptado!");
    }
    
    while (monto >= 100){
        monto = monto - 100;
        billete100++;
    }
    while (monto>50){
        monto = monto - 50;
        billete50++;
    }
    while (monto>=20){
        monto = monto - 20;
        billete20++;
    }
    while (monto>=10){
        monto = monto - 10;
        billete10++;
    }
    while (monto>=5){
        monto = monto - 5;
        billete5++;
    }
    while (monto>=1){
        monto = monto - 1;
        billete1++;
    }
printf ("Transaccion completada\n\n");
printf ("billetes de 100 %d\n", billete100);
printf ("billetes de 50 %d\n", billete50);
printf ("billetes de 20 %d\n", billete20);
printf ("billetes de 10 %d\n" , billete10);
printf ("billetes de 5 %d\n", billete5);
printf ("billetes de 1 %d\n", billete1);
    }