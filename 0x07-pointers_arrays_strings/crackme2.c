#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char correct_pass[] = ????????????????? ;
char *deobf(char *s)
{
 ???????????????
}

int main()
{
	char buf[1000];

	printf("Password:\n");
	if (fgets(buf, 1000, stdin) == NULL)
		exit(-1);

	buf[strlen(buf) - 1] = '\0';

	if (!strcmp(buf, deobf(correct_pass))) {
		printf("Correct!\n");
	} else
		printf("Nope!\n");

	return 0;
}
