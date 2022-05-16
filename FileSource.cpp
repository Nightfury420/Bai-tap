#include <stdio.h>

#include <string.h>
void starting()
{
	int s;

	printf("1. Load Data.");

	printf("\n2. Nhap Lieu.");

	printf("\n3. In Danh Sach Hoc Sinh.");

	printf("\n4. Luu Thong Tin Hoc Sinh.");

	printf("\n5. Thoat.");

	printf("\nChon 1 trong 5 chuc nang(1-5): ");

	return;
}

struct hs
{
	char name[50];

	int birthday;

	int sex;
};

int strlen(char m1[])
{
	int len = 0;
	while (m1[len] != '\0')
	{
		len++;
	}

	return len;
}

char* alignleft(char m1[], int len)
{
	int llen = len - strlen(m1);

	static char m1_new[1000] = " ";

	for (int i = 0; i < strlen(m1); i++)
		m1_new[i] = m1[i];

	for (int i = strlen(m1); i < len; i++)
		m1_new[i] = 32;

	m1_new[len] = '\0';

	return m1_new;
}

char* center(char m1[], int len)
{
	int llen = len - strlen(m1);

	llen /= 2;

	static char m1_new[1000] = " ";

	for (int i = 0; i < llen; i++)
	{
		m1_new[i] = 32;
	}
	
	for (int i = 0; i < strlen(m1); i++)
		m1_new[llen + i] = m1[i];

	for (int i = llen + strlen(m1); i < len; i++)
		m1_new[i] = 32;

	m1_new[len] = '\0';

	return m1_new;
}

char* line(char c, int len)
{	static char m1[1000] = " ";

	for (int i = 0; i < len; i++)
	{
		m1[i] = c;
	}
	m1[len] = '\0';

	return m1;
}

void printLine()
{
	printf("%c%s%c", '+', line('-', 4), '+');

	printf("%s%c", line('-',47), '+');

	printf("%s%c",  line('-', 10), '+');

	printf("%s%c", line('-', 12), '+');
}

void printTitle()
{
	char title[][100] = { "So","Ho va Ten" , "Nam Sinh" , "Gioi Tinh" };

	printLine();

	printf("\n| %s ", center(title[0], 2));

	printf("| %s ", center(title[1],45));

	printf("| %s ", center(title[2], 8));

	printf("| %s |\n", center(title[3], 10));

	printLine();

}

void showAll(struct hs list[], int n)
{
	char sex[][10] = { "N/A","Nu","Nam" };

	for (int i = 0; i < n; i++)
	{
		printf("\n| %d  |", i + 1);

		printf(" %s |", alignleft(list[i].name, 45));

		printf("%9d |", list[i].birthday);

		if (list[i].sex >= 0 && list[i].sex <= 2)
			printf("%11s |\n", sex[list[i].sex]);

		printLine();

	}
	printf("\0");
}

void saveFile(struct hs list[], int n)
{
	FILE *HSFile;

	fopen_s(&HSFile, "E:\\Game project\\Visual studio\\HSFile\\qlhs.dat", "w");
	
	if (HSFile == NULL)
	{
		printf("Khon tao duoc file");
		return;
	}
	
	for (int i = 0; i < n; i++)
	{
		fwrite(&list[i], sizeof(struct hs), 1, HSFile);
		if (fwrite == 0)
		{
			printf("Luu noi dung hoc sinh khong thanh cong");
			return;
		}
	}
	fclose(HSFile);
}

void readFile(const char *filePath)
{
	FILE* HSFile;
	
	fopen_s(&HSFile, "E:\\Game project\\Visual studio\\HSFile\\qlhs.dat", "r");

	if (HSFile == NULL)
	{
		printf("Doc file bi loi");
		return;
	}
	struct hs list[1000];

	int i = 0;
	
	while (fread(&list[i], sizeof(struct hs), 1, HSFile))
		i++;
	
	fclose(HSFile);

	printf("\n");

	printTitle();

	showAll(list, i);
}

int main() 
{

	struct hs list[100];
	
	int n, s;

	int l = 0;

	int o = 0;

begin:

	if (o != 0)
		printf("\n");

	starting();

	scanf_s("%d", &s);

	while (s <= 0 || s > 5)
	{
		printf("Error nhap so tu 1 toi 5\n");

		starting();

		scanf_s("%d", &s);
	}

	o++;

	switch (s)
	{
	case 1:
		readFile("E:\\Game project\\Visual studio\\HSFile\\qlhs.dat");

		goto begin;

		break;
	
	case 2:
		printf("So luong hoc sinh: ");
		scanf_s("%d%*c", &n);


		for (int i = 0; i < n; i++)
		{
			printf("Ho ten: ");
			gets_s(list[i].name);

			printf("Nam Sinh: ");
			scanf_s("%d%*c", &list[i].birthday);

			printf("0 la N/A; 1 la Nu; 2 la Nam;");

			printf("\nGioi tinh: ");
			scanf_s("%d%*c", &list[i].sex);
		}

		l++;

		goto begin;

		break;
	
	case 3:
		if (l == 0)
		{
			readFile("E:\\Game project\\Visual studio\\HSFile\\qlhs.dat");
		}
		else
		{
			printTitle();

			showAll(list, n);
		}

		goto begin;

		break;
	
	case 4:
		saveFile(list, n);

		goto begin;

		break;
	
	case 5:
		return 0;
		break;
	}

	if (s == 5)
		return 0;

	

	

	

	

	

	
	
	return 0;
}

