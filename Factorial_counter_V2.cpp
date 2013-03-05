#include <stdio.h>
#include <locale.h>

int factorial(int x)
{
	int rezult = 1;
	while(x != 0)
	{
		rezult = rezult * x;
		x--;
	}
	return rezult;
}

void main()
{

	int chislo;
	int otvet;
	setlocale(LC_CTYPE,"Russian");
	printf("Программа считающая факториал от введенного числа\n\n");
	printf("Введите число:");
	scanf("%d", &chislo);
	otvet = factorial(chislo);
	printf("Факториал от числа %d равен %d\n", chislo, otvet);
}

