#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float base;
	float height;
	float area;
	
	printf("Calcule a �rea do Tri�ngulo: \n");
	
	printf("Insira o valor da base do tri�ngulo: ");
	scanf("%f", &base);
	
	printf("Insira o valor da altura do tri�ngulo: ");
	scanf("%f", &height);
	
	area = (base * height) / 2;
	
	printf("A �rea do tri�ngulo: %.2f m^2", area);
	
	return 0;
}
