#include <stdio.h>

#include <string.h>

int main()
{
	char m1[100];

	char m2[100]= " ";

	int n = 0;

	int t = 0;

	printf("Nhap chuoi: ");
	gets_s(m1);

	for (int i = strlen(m1) - 1; i >= 0; i--)
	{
		m2[n++] = m1[i];

		m2[n] = '\0';
	}

	for (int i = 0; i < strlen(m1) ; i++)
	{
		if (m2[i] != m1[i])
		{
			t++;
		}	
	}

	if (t == 0)
		printf("%s la chuoi palindrome", m1);
	else 
		printf("%s khong la chuoi palindrome", m1);


	return 0;
}