#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	
	int first_num=0, resul_fact=1, incre=0;
	
	printf("\n Escribe el numero a saber su factorial: ");
	scanf("%d", &first_num);
	
	for(incre=1; incre<=first_num; incre++){
		resul_fact= resul_fact *incre;
	}
	
	printf("\n\t %d es: %d", first_num, resul_fact);

}
