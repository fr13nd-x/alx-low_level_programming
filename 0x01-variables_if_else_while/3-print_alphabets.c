#include <stdio.h>
#include <ctype.h>
/**main - prints alphabets in lowercase then uppercase
 * 
 * return: 0 always (success)
 */
int main(void)
{
	char ch;

	for (ch='a'; ch<='z'; ch++)
		putchar(tolower(ch));
	for (ch='a'; ch <='z'; ch++)
		putchar(toupper(ch));

	putchar('\n');
	return (0);

}
