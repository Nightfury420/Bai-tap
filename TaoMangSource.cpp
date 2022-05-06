#include <stdio.h>

int main()
{
	int m1[100][100];

	int y, x;

	int c = 0;

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
			if (m1[i][j] % 5 == 0)
				c = m1[i][j] + c;
		}
	}

	printf("Ket qua tong voi dieu kien i+j het cho 5 la: %d", c);


	printf("\n");

	printf("Cac i va j chia het cho 5 la: ");

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (m1[i][j] % 5 == 0)
			{
				printf("\n");

				printf("m1[%d][%d] = %d", i, j, m1[i][j]);
			}

		}
	}

	return 0;
}