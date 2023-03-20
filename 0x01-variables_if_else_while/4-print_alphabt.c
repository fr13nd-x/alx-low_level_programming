#include <stdio.h>
/**main - prints the alphabet in lowercase except q and e
 * 
 * return: 0 always(success)
 */
int main(void)
{
	char ch;
	for (ch='a'; ch<='z'; ch++)
		if (ch=='q' || ch=='e')
		{
			continue;
		}
		else
			putchar(ch);
			putchar('\n');

	return (0);
}
