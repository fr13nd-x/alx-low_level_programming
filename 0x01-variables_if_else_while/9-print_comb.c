#include <stdio.h>
/**main - prints all possible combinations of single-digit numbers
 * 
 * return: 0 always on success
 */
int main(void)
{
	int a;

	for (a='0'; a<='9'; a++)
	{
		putchar(a);
		if (a <= '8')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
