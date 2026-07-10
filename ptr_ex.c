#include <stdio.h>

int main(void)
{
	char text[] = "The fence is not made of sausages.";

	char *ptext = text;	// point to start of string
	char *pend = text + sizeof(text) - 2;	// point to end of string

	char c;

	while(ptext < pend)
	{
		c = *ptext;
		*ptext = *pend;
		*pend = c;
		++ptext;
		--pend;
	}

	printf("%s\n", text);

	return 0;
}
