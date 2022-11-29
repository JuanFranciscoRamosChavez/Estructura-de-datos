#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int num_cuent, ultimo_dig,i;
    int *pv = (int*) malloc(10* sizeof(int));

	printf("\n\n Impresion de la sucesion de numeros pares en forma inversa:");
    for(i = 0; i < 10; i++){
        pv[i] = (i+1)*2;
    }for(i = 9; i >= 0; i--){    
        printf(" %d ", pv[i]);
    }

    printf("\n\n Ingrese su numero de cuenta: ");
    scanf("\n\t%d", &num_cuent);
    ultimo_dig = num_cuent % 10;
    
	printf("\n El numero de cuenta almacenado se le recore a su ultimo digito un -1: ");
	pv[ultimo_dig] = -1;	
    for (i = 0; i < 10; i++){
        printf(" %d ", pv[i]);
    }

}
