#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float base;
	float height;
	float area;
	
	printf("Calcule a Área do Triângulo: \n");
	
	printf("Insira o valor da base do triângulo: ");
	scanf("%f", &base);
	
	printf("Insira o valor da altura do triângulo: ");
	scanf("%f", &height);
	
	area = (base * height) / 2;
	
	printf("A área do triãngulo: %.2f m^2", area);
	
	return 0;
}
