#include <stdio.h>

int main(){
	int numero;
	
	printf("digite um numero: ");
	scanf("%d", &numero);
	if(numero % 5 == 0){
		printf("o numero %d e divisivel por 5", numero);
	}else{
		printf("o numero %d não e divisivel por 5", numero);	
	}
	return 0;
}
