#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float weight;
	float height;
	float imc;
	
	printf("Calculadora de Índice de Massa Corporal (IMC): \n");
	
	printf("Insira o seu peso atual: ");
	scanf("%f", &weight);
	
	printf("Insira a sua altura: ");
	scanf("%f", &height);
		
	imc = weight / (height * height);
	
	printf("O seu IMC atual: %.2f", imc);
	
	return 0;
}
