#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	FILE *fp;
	char c;
	char input[100];
	
	//fopen
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
	{
		printf("Failed to open file!\n");
		return -1;
	}
	//fprintf
	#if 0
	while ( (c = fgetc(fp)) != EOF) 
	{
		putchar(c);
	}
	#else
	while ( fgets(input, 100, fp) > 0)
	{
		printf("%s", input);
	}
	#endif
	//fclose
	fclose(fp);
	
	return 0;
}
