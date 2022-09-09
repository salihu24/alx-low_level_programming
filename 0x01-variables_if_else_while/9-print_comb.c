#include <stdio.h>

/**
 * main - Entry point
 * author:salihu
 * Return: Always 0 (Success)
 */
int main(void)
{
	int salihu;

	for (salihu = 48; salihu < 58; salihu++)
	{
		putchar(salihu);
		if (salihu != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
