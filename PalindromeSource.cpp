#include <stdio.h>

#include <string.h>

int main()
{
	char m1[100];

	char m2[100]= " ";

	int n = 0;

	int t = 0;

	printf("Nhap chuoi: ");
	fgets(m1, sizeof(m1), stdin);

	for (int i = strlen(m1) - 1; i >= 0; i--)
	{
		m2[n] = m1[i];

		n++;
	}

	for (int i = 1; i < strlen(m1) - 1 ; i++)
	{
		int n = 0;
		if (m2[i] != m1[n])
		{
			t++;
		}	
		n++;
	}

	printf("%s", m1);
	
	for (int i = 0; i < strlen(m1) ; i++)
	{
		printf("%d ", m1[i]);
		
	}

	printf("\n");

	for (int i = 0; i < strlen(m1); i++)
	{
		printf("%d ", m2[i]);
	}

	printf("%s", m2);

	printf("\n%d", t);

	//if (t == 0)
	//	printf("%s la chuoi palindrome", m1);
	//else 
	//	printf("%s khong la chuoi palindrome", m1);


	return 0;
}