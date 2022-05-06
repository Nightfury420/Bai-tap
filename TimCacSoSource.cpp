#include <stdio.h>

int main()
{
	int m1[1000];

	int m2[1000];

	int n, r;

	int b = 0;

	int flag;

	printf("Nhap chieu dai: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Nhap gia tri cho m1[%d]: ", i);
		scanf_s("%d", &m1[i]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (m1[i] > m1[j])
			{
				r = m1[i];

				m1[i] = m1[j];

				m1[j] = r;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (m1[i] < m1[i + 1] - 1)
		{
			for (int j = m1[i] + 1; j < m1[i + 1]; j++)
			{
				m2[b] = j;

				b++;
			}
		
		}

	}

	printf("\n");

	printf("Ket Qua: ");

	for (int i = 0; i < n; i++)
	{
		printf("%d ", m1[i]);
	}

	printf("\n");

	printf("Cac so con thieu la: ");

	for (int i = 0; i < b; i++)
	{
		printf("%d ", m2[i]);
	}

	return 0;
}