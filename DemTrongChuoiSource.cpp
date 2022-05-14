#include <stdio.h>

#include <string.h>

int main()
{
	char m1[100];

	int count = 0;

	printf("Nhap chuoi: ");
	fgets(m1, sizeof(m1), stdin);

	for (int i = 0; i < strlen(m1); i++)
	{
		if (m1[i] == 97 || m1[i] == 65)
			count++;
		else if (m1[i] == 101 || m1[i] == 69)
			count++;
		else if (m1[i] == 117 || m1[i] == 85)
			count++;
		else if (m1[i] == 105 || m1[i] == 73)
			count++;
		else if (m1[i] == 111 || m1[i] == 79)
			count++;
	}

	printf("Chuoi co %d nguyen am", count);

	return 0;
}