#include <stdio.h>


float calcularIMC(float peso, float altura) {
    return peso / (altura * altura);
}


void classificarIMC(float imc) {
    if (imc < 16.9) {
        printf("Classifica��o: Muito abaixo do peso\n");
    } else if (imc >= 17 && imc <= 18.4) {
        printf("Classifica��o: Abaixo do peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Classifica��o: Peso normal\n");
    } else if (imc >= 25 && imc <= 29.9) {
        printf("Classifica��o: Acima do peso\n");
    } else if (imc >= 30 && imc <= 34.9) {
        printf("Classifica��o: Obesidade grau I\n");
    } else if (imc >= 35 && imc <= 40) {
        printf("Classifica��o: Obesidade grau II\n");
    } else if (imc > 40) {
        printf("Classifica��o: Obesidade grau III\n");
    }
}

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    
    printf("Digite a altura (m): ");
    scanf("%f", &altura);
    
    imc = calcularIMC(peso, altura);
  
    printf("Seu IMC �: %.2f\n", imc);

    classificarIMC(imc);

    return 0;
}
