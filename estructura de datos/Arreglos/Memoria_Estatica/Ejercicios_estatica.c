#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_cuent, ultimo, i;
    int arrayI[10];
    
	printf("\n\n Impresion de la sucesion de numeros pares en forma inversa: ");    
    for(i = 0; i < 10; i++){
        arrayI[i] = (i+1)*2;
    }for(i = 9; i >= 0; i--){    
        printf(" %d ", arrayI[i]);
    }

	printf("\n\n Ingrese su numero de cuenta: ");
    scanf("\n %d", &num_cuent);
    ultimo = num_cuent % 10;
    arrayI[ultimo] = -1;

	printf("\n El numero de cuenta almacenado se le recore a su ultimo digito un -1: ");
    for (i = 0; i < 10; i++){
        printf(" %d ", arrayI[i]);
    }
}
