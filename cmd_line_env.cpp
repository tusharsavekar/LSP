#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv, char **env)
{
	for (int i = 0; i < argc ; i++)
	{
		printf("\n%p %s\n", &argv[i], argv[i]);
	}
	
	for (int i = 0; *env != NULL ; env++, i++)
	{
		printf("[%d] : %p %p %s\n", i, env, *env, *env);
	}

	printf("\nUSER : %s\n", getenv("USER"));
	printf("\nPATH : %s\n", getenv("PATH"));
	printf("\nPWD : %s\n", getenv("PWD"));
	printf("\nHAHA : %s\n", getenv("HAHA"));

	return 0;
}
