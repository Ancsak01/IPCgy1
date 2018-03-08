#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <time.h>

int main()
{
	int R, st, ret;

	srand(time(NULL));
	R = rand() % 256;

	do
	{
		if (fork() == 0)
		{
			execve("f1", NULL, NULL);
			exit(-1);
		}

		wait(&st);
		ret = WEXITSTATUS(st);

		if (ret < R)
			printf("A szam nagyobb\n");
		else if (ret > R)
			printf("A szam kisebb\n");
	}
	while (ret != R);

	printf("Grat!\n");

	return 0;
}
