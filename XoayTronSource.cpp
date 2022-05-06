#include <stdio.h>

int main()
{
	int m1[1000];

	int m2[1000];

	int n, t;

	int l = 0;

	printf("Nhap chieu dai: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Nhap gia tri cho m1[%d]: ", i);
		scanf_s("%d", &m1[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (m1[i] % 3 == 0)
		{
			m2[l] = m1[i];

			l++;
		}
	}

	for (int i = 0; i < l; i++)
	{
		if (i == 0)
			t = m2[i];

		m2[i] = m2[i + 1];

		if (i == l - 1)
		{
			m2[i] = t;
		}
	}

	for (int i = 0, t = 0; i < n; i++)
	{
		if (m1[i] % 3 == 0)
		{
			m1[i] = m2[t];

			t++;
		}
	}

	printf("\n");

	printf("Ket qua: ");


	for (int i = 0; i < n; i++)
	{
		printf("%d ", m1[i]);
	}


	return 0;
}