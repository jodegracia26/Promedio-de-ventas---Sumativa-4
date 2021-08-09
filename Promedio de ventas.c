#include <stdio.h>

int main()
{
        float ventas [3][5] , average;
        int i, j, dia;

        printf("Calculo del promedio de las ventas diarias\n");
        for(i=0 ; i<3; i++) {
            printf("Vendedor %d\n" , i+1);
            dia = 1;
            for(j=0 ; j<5; j++) { // Counts from 0 to 5 
                printf("Dia %d: ",dia);
                scanf("%f" , &ventas[i] [j]);
                dia ++;
            }
        }

        for (j=0; j<5; j++) {
            average = 0;

            for (i=0; i<3; i++) {
                average += ventas [i][j];
            }
            average /= 3.0;
            printf("El promedio de ventas de los 3 vendedores es: %.2f\n", average);
        }


    return 0;
}
