#include<stdio.h>
#include<string.h>

int main(void)
{
	int password = 0;
	char locked[] = "locked";
	char result[255];
	do{
		printf("%03d\n", password++);
		fflush(stdout);
		scanf("%s", result);
	}while(strcmp(result, locked) == 0);
	return 0;
}

