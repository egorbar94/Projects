#include <stdio.h>
#include <locale.h>
void main()
{
	int chislo;
	int count;
	int rezult = 1;
	setlocale(LC_CTYPE,"Russian");
	printf("��������� ��������� ��������� �� ���������� �����\n\n");
	printf("������� �����:");
	scanf("%d", &chislo);
	count = chislo;
	while(count != 0)
	{
		rezult = rezult * count;
		count--;
	}
	printf("��������� �� ����� %d ����� %d\n", chislo, rezult);
}