#include <stdio.h>

int main()
{
	int m1[10][10];

	int y, x;

	int min = 0;

	int max = 0;

	int flag, banana;

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

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			flag = 0;

			banana = 0;

			for (int z = 0; z < x; z++)
			{
				if (m1[i][j] < m1[i][z])
					flag++;
			}

			for (int z = 0; z < x; z++)
			{
				if (m1[i][j] > m1[i][z])
					banana++;
			}

			if (flag == x - 1)
				min = m1[i][j];

			if (banana == x - 1)
				max = m1[i][j];
		}

		printf("\n");

		printf("Dong %d co (min, max, middle) la (%d, %d, %d)", i + 1, min, max, (min + max) / 2);

	}

	return 0;
}