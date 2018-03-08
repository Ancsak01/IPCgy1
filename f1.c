#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <time.h>

#define N 100000

int main()
{
	int szam;
	printf("Tippelj: ");
	scanf("%d", &szam);

	return szam;
}
