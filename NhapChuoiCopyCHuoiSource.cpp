#include <stdio.h>

#include <string.h>

int main()
{
	char m1[100];

	char m2[100];

	int i, l;

	int n = 0;

	printf("Nhap chuoi: ");

	fgets(m1, sizeof(m1), stdin);

	printf("Nhap i: ");
	scanf_s("%d", &i);

	printf("Nhap l: ");
	scanf_s("%d", &l);

	for (int j = i; j <= l + 1; j++)
	{
		m2[n] = m1[j];

		n++;
	}

	printf("\n");

	for (int j = 0; j < l; j++)
	{
		printf("%c", m2[j]);
	}



	return 0;
}