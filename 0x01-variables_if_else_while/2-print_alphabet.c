#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: alphabet in lowercase, followed by a new line.
 *
 * Always return(0)
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);

}


