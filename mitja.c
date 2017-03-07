#include <stdio.h>

int main() {
	float suma=0.0;
	float mitja=0.0;
	float nou_valor=0.0;
	int numero_repeticions=0;
	char consulta='y';
	
	while(consulta=='y') {
		printf("Dòna la següent dada: ");
		scanf("%f",&nou_valor);
		suma=suma+nou_valor;
		numero_repeticions=numero_repeticions+1;
		printf("Vols continuar (y/n): ");
		scanf(" %y",&consulta); 
	}
	mitja=suma/numero_repeticions;
	printf("La mitja és: %.2f\n",mitja);	
	return 0;
}
