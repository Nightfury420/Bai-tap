#include <stdio.h>

#include <string.h>

int main()
{
	char m1[100];

	char m2[]= " ";

	int n = 0;

	int t, m, l;

	printf("Nhap chuoi: ");
	fgets(m1, sizeof(m1), stdin);

	for (int i = 0; i < strlen(m1); i++)
	{
		t = 0;

		m = 0;

		l = 0;

		for (int j = i + 1; j < strlen(m1); j++)
		{
			if (m == 0)
			{
				m2[n] = m1[i];

				n++;

				t++;

				m++;
			}

			if (m1[i] == m1[j])
			{
				m2[n] = m1[j];

				for (int c = j; c < strlen(m1); c++)
				{
					m1[c] = m1[c + 1];
				}

				while (m1[i] == m1[j])
				{
					n++;

					m2[n] = m1[j];

					for (int k = j; k < strlen(m1); k++)
					{
						m1[k] = m1[k + 1];
					}
					
					t++;

					if (t == 5)
					{
						for (int g = j + 1; g < strlen(m1); g++)
						{
							if (m1[i] == m1[g])
							{
								while (m1[i] == m1[g])
								{
									for (int r = g; r < strlen(m1); r++)
									{
										m1[r] = m1[r + 1];
									}
								}
							}
						}

						m2[n] = '<';

						n++;

						m2[n] = '>';

						j = j + strlen(m1);

						l++;
					}
				}

				t++;

				n++;

				if (t == 5 && l == 0)
				{
					for (int g = j + 1; g < strlen(m1); g++)
					{	
						if (m1[i] == m1[g])
						{
							while (m1[i] == m1[g])
							{
								for (int r = g; r < strlen(m1); r++)
								{
									m1[r] = m1[r + 1];
								}
							}
						}
					}

					m2[n] = '<';

					n++;

					m2[n++] = '>';

					j = j + strlen(m1);
				}
					
			}
		}

		if (t > 1 && t < 5)
		{
			m2[n] = '<';

			n++;

			m2[n] = '>';

			n++;
		}
	}
	      
	printf("Ket qua: %s", m2);

	return 0;
}