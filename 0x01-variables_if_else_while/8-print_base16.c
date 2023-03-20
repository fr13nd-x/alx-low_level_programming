#include <stdio.h>
/**main - prints all the numbers of base 16 in lowercase
 * 
 * return: 0 always(success)
 */
int main(void)
{
	
	char a,ch;

	for (a='0'; a<='9'; a++)
		putchar(a);
	for (ch='a'; ch<='f'; ch++)
		putchar(ch);


	return (0);
}
