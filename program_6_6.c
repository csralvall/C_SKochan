// This is program 6.6 of the book "Programming in C" by Stephen G. Kochan.

// Itroducing Character Arrays.

#include <stdio.h>

int main (void)
{
	char	word[] = { 'H', 'e', 'l', 'l', 'o', '!' };
	int	i;

	for ( i = 0; i < 6; ++i )
		printf	("%c", word[i]);

	printf	("\n");

	return 0;
}
