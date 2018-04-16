#include <stdio.h>
#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(void)
{
	char letter;
	char ltts;

	printf("Renes function: \n");
	for (letter = 'A' ; letter <= 'Z' ; letter++)
		{ft_putchar(letter);}
	printf("\n\n");
	printf("Computers function: \n");
	for (ltts = 'A' ; ltts <= 'Z' ; ltts++)
		{putchar(ltts);}
	printf("\n");
	
	return (0);
}