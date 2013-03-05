#include <stdio.h>
#include <locale.h>
void main()
{
	int chislo;
	int count;
	int rezult = 1;
	setlocale(LC_CTYPE,"Russian");
	printf("Программа считающая факториал от введенного числа\n\n");
	printf("Введите число:");
	scanf("%d", &chislo);
	count = chislo;
	while(count != 0)
	{
		rezult = rezult * count;
		count--;
	}
	printf("Факториал от числа %d равен %d\n", chislo, rezult);
}