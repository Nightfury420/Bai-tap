#include <stdio.h>

int main()
{
	int m1[1000];

	int n;

	int r = 0;

	printf("Nhap chieu dai: ");
	scanf_s("%d", &n);

	for (int i = 0; i < n; i++)
	{
		printf("Nhap gia tri cho m1[%d]", i);
		scanf_s("%d", &m1[i]);
	}

	for (int i = 0; i < n; i++)
	{
		if (m1[i] < 0)
		{
			for (int j = i; j < n; j++)
			{
				m1[j] = m1[j + 1];
			}

			n--;

			if (m1[i] < 0)
			{
				for (int j = i; j < n; j++)
				{
					m1[j] = m1[j + 1];
				}

				n--;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		r = m1[i] + r;
	}



	printf("trung binh cong cac so co gia tri khong am la %d", r / n);

	return 0;
}