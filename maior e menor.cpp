#include <stdio.h>

int main(){
	int numero, maior, menor;
	
	printf("primeiro numero:");
	scanf("%d", &numero);
	
	maior=numero;
	menor=numero;
	
	printf("segundo numero:");
	scanf("%d", &numero);
	if(numero>maior){
		maior = numero;
	}
	if(numero<menor){
		menor = numero;
	}
	
	printf("terceiro numero:");
	scanf("%d", &numero);
	if(numero>maior){
		maior = numero;
	}
	if(numero<menor){
		menor = numero;
	}
	
	printf("quarto numero:");
	scanf("%d", &numero);
	if(numero>maior){
		maior = numero;
	}
	if(numero<menor){
		menor = numero;
	}
	
	printf("quinto numero:");
	scanf("%d", &numero);
	if(numero>maior){
		maior = numero;
	}
	if(numero<menor){
		menor = numero;
	}
	
	printf("maior = %d", maior);
	printf("\nmenor = %d", menor);
	
	return 0;
}
