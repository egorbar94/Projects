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
	printf("��������� ��������� ��������� �� ���������� �����\n\n");
	printf("������� �����:");
	scanf("%d", &chislo);
	otvet = factorial(chislo);
	printf("��������� �� ����� %d ����� %d\n", chislo, otvet);
}

