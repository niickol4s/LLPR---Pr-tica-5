#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float first;
	float second;
	float third;
	float calc1;
	float calc2;
	float calc3;
	float calc4;
	
	printf("Calcule a trajetória: \n");
	
	printf("Insira o primeiro valor: ");
	scanf("%f", &first);
	
	printf("Insira o segundo valor: ");
	scanf("%f", &second);
	
	printf("Insira o terceiro valor: ");
	scanf("%f", &third);
	
	calc1 = (first * second) / third;
	
	calc2 = first * first + second + 5*third;
	
	calc3 = (first * second * third) + second + (third/3) * 5 - 1;
	
	calc4 = (first * second * third) * (first * second * third) * (first * second * third) /2;
	
	printf("Resultado: \n Cálculo 1= %.2f \n Cálculo 2= %.2f \n Cálculo 3= %.2f \n Cálculo 4= %.2f", calc1, calc2, calc3, calc4);
	
	return 0;
}
