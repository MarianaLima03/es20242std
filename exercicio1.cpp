#include <stdio.h>
#include <math.h>

double soma(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);
double media(double n1, double n2);
double porcent(double n1, double n2);
void eq2s(double a, double b, double c);

int main(){
	double valor1, valor2, valor3;
	char op;
	printf("escolha a operacao:\n");
	printf("+ ADICAO\n");
	printf("- SUBTRACAO\n");
	printf("/ DIVISAO\n");
	printf("* MULTIPLICACAO\n");
	printf("M MEDIA\n");
	printf("P PORCENTAGEM\n");
	printf("S EQUACAO DE 2 GRAU\n");
	scanf("%c", &op);
	if(op != 's'){
	
	//printf("esse eh o op %c\n", op);
	//printf("esse eh o &op %p", &op);
	printf("digite o primeiro numero: ");
	scanf("%lf",&valor1);
	printf("digite o segundo numero: ");
	scanf("%lf",&valor2);
	}else{
		printf("digite o valor de A: ");
		scanf("%lf",&valor1);
		printf("digite o valor de B: ");
		scanf("%lf",&valor2);
		printf("digite o valor de C: ");
		scanf("%lf",&valor3);		
	}
	
	if(op == '+')printf("soma = %.2f",soma(valor1,valor2));
	else if(op == '-')printf("sub = %.2f",sub(valor1,valor2));
	else if(op == '/')printf("div = %.2f",div(valor1,valor2));
	else if(op == '*')printf("mult = %.2f",mult(valor1,valor2));
	else if(op == 'm')printf("media = %.2f",media(valor1,valor2));
	else if(op == 'p')printf("porcent = %.2f",porcent(valor1, valor2));
	else if(op == 's')eq2s(valor1,valor2,valor3);
	else{
		printf("operacao %c invalida!!!", op);
	}
	
	/*
	printf("soma %.2f\n",soma(8,3));
	printf("sub %.2f\n",sub(8,3));
	printf("div %.2f\n",div(8,3));
	printf("mult %.2f\n",mult(8,3));
	printf("media %.2f\n",media(8,3));
	*/
	return 0;	
}

double soma(double n1, double n2){
	return n1 + n2;
}
double sub(double n1, double n2){
	return n1 - n2;
}
double div(double n1, double n2){
	return n1 / n2;
}
double mult(double n1, double n2){
	return n1 * n2;
}
double media(double n1, double n2){
	return div(soma(n1,n2),2);
	// return (n1 + n2)/2;
}
double porcent(double n1, double n2){
	return mult(n1,div(n2,100));
}
void eq2s(double a, double b, double c){
	double delta =sub(mult(b,b),mult(mult(4,a),c));
	 if (delta < 0) {
        printf("A equacao nao possui raizes reais.\n");
    } else if (delta == 0) {
        double x1 = div(-b, mult(2, a));
        printf("A equacao possui uma raiz real: x1 = %.2f\n", x1);
    } else {
        double sqrt_delta = sqrt(delta);
        double x1 = div(sub(-b, sqrt_delta), mult(2, a));
        double x2 = div(soma(-b, sqrt_delta), mult(2, a)); 
        printf("A equacao possui duas raizes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
	
}

