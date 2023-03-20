#include <stdio.h>
/**main - loop through alphabets from a to z
 * 
 * return: 0 always (success)
 */

int main(void)
{
	
	for (char alph='a'; alph < 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
