#include <stdio.h>

int main()
{
	int dia, mes, año;

	printf("Escribe que dia naciste: ");
	scanf_s("%d", &dia);

	printf("Escribe que mes naciste: ");
	scanf_s("%d", &mes);

	do
	{
		printf("Escribe que año naciste: ");
		scanf_s("%d", &año);

		if (año > 9999 || año < 1000)
		{
			printf("Escribe el año en 4 digitos");
		}

	} while (año > 9999 || año < 1000);

	int resultado = dia + mes + año;

	printf("%d", resultado);


}