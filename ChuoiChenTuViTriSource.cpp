#include <stdio.h>

#include <string.h>

int main()
{
	char m1[30];

	char m2[30];

	int i;

	int j = 0;

	printf("Nhap chuoi: ");

	fgets(m1, sizeof(m1), stdin);

	printf("Nhap chuoi chen: ");

	fgets(m2, sizeof(m2), stdin);

	printf("Nhap vi tri chen: ");
	scanf_s("%d", &i);

	for (int n = i; n <= strlen(m2); n++)
	{
		m1[n] = m2[j];

		j++;
	}

	printf("\n%s", m1);

	return 0;
}