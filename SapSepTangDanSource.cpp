#include <stdio.h>

int main()
{
	int m1[10][10];

	int m2[100];

	int y, x, v;

	printf("Nhap y: ");
	scanf_s("%d", &y);

	printf("Nhap x: ");
	scanf_s("%d", &x);

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			printf("Nhap gia tri cho m1[%d][%d]: ", i, j);
			scanf_s("%d", &m1[i][j]);
		}

		printf("\n");
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
				if (i % 2 == 0)
				{
					for (int z = j; z < y; z++)
					{
						if (m1[j][i] < m1[z][i])
						{
							v = m1[j][i];

							m1[j][i] = m1[z][i];

							m1[z][i] = v;
						}
					
					}
				}
				else
				{
					for (int z = j; z < y; z++)
					{
						if (m1[j][i] > m1[z][i])
						{
							v = m1[j][i];

							m1[j][i] = m1[z][i];

							m1[z][i] = v;
						}
					}
				}
		}
	}

	printf("Ket qua: ");

	printf("\n");

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			printf(" %d", m1[i][j]);
		}
		printf("\n");
	}

	return 0;
}