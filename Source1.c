#include <stdio.h>

int main()
{
	int dia, mes, a�o;

	printf("Escribe que dia naciste: ");
	scanf_s("%d", &dia);

	printf("Escribe que mes naciste: ");
	scanf_s("%d", &mes);

	do
	{
		printf("Escribe que a�o naciste: ");
		scanf_s("%d", &a�o);

		if (a�o > 9999 || a�o < 1000)
		{
			printf("Escribe el a�o en 4 digitos");
		}

	} while (a�o > 9999 || a�o < 1000);

	int resultado = dia + mes + a�o;

	printf("%d", resultado);


}