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
	
	printf("Calculadora b�sica: \n");
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &first);
	
	printf("Insira o segundo valor: ");
	scanf("%f", &second);
	
	mult = first * second;
	
	divs = first / second;
	
	adc = first + second;
	
	sub = first - second;
	
	printf("Resultado das opera��es: \n Multiplica��o= %.2f \n Divis�o= %.2f \n Adi��o= %.2f \n Subtra��o= %.2f", mult, divs, adc, sub);
	
	return 0;
}
