#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float first;
	float second;
	float mult;
	float divs;
	float adc;
	float sub;
	
	printf("Calculadora básica: \n");
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &first);
	
	printf("Insira o segundo valor: ");
	scanf("%f", &second);
	
	mult = first * second;
	
	divs = first / second;
	
	adc = first + second;
	
	sub = first - second;
	
	printf("Resultado das operações: \n Multiplicação= %.2f \n Divisão= %.2f \n Adição= %.2f \n Subtração= %.2f", mult, divs, adc, sub);
	
	return 0;
}
