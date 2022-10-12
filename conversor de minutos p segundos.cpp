#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	float min;
	float quant;
	
	printf("Conversor de minutos para segundos: \n");
	
	printf("Insira a quantidades de minutos: ");
	scanf("%f", &min);
	
	quant = min * 60;
	
	printf("A quantidade de segundos em %.2f foi: %.2f", min, quant);
	
	return 0;
}
