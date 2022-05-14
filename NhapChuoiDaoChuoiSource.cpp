#include <stdio.h>

int main()
{
	char m1[1000];

	int n = 0;

	gets_s(m1);

	for (;m1[n] != '\0'; n++)
	{
	}

	printf("Ket qua: ");

	for (int i = n -1 ; i >= 0; i--)
	{
		printf("%c", m1[i]);
	}

	return 0;
}