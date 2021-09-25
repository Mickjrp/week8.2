#pragma warning (disable: 4996)
#include <stdio.h>
#include <string.h>

char input[100];

int main()
{
	printf("Input: ");
	scanf_s("%s", input, sizeof(input));

	char n[] = { 'a','e','i','o','u' };
	char v[] = { '0','1','2','3','4' };

	FILE* f = fopen("karaca.txt", "w");
	int i = strlen(input) - 4;
	for (input[i];i >= 0;i--)
	{
		if (input[i] == v[0] || input[i] == v[1] || input[i] == v[2] || input[i] == v[3] || input[i] == v[4])
		{
			for (int k = 0;k <= 4;k++)
			{
				if (input[i] == v[k])
				{
					fprintf(f,"%c", n[k]);
				}
			}
			int k = 0;
		}
		else
		{
			fprintf(f,"%c", input[i]);
		}
	}
	fclose(f);

	return 0;
}