#include <stdio.h>
/**main - prints the lowercase alphabet in reverse,
 * 
 * return: 0 always(success)
 */
int main(void)
{
	char x;

	for (x='z'; x>='a'; x--)
		putchar(x);

	return (0);
}
