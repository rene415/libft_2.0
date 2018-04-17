#include "libft.h"

/* the main for ft_putchar
int			main(void)
{
	char letter;

	printf("Renes function: \n");
	for (letter = 'A' ; letter <= 'Z' ; letter++)
	{
		ft_putchar(letter);
	}
	printf("\n\n");
	printf("Computers function: \n");
	for (letter = 'A' ; letter <= 'Z' ; letter++)
	{
		putchar(letter);
	}
	printf("\n");
	return (0);
}

 the main for ft_putstr main
int		main(void)
{
	char str[12] = "Hello";
	char str1[12] = "World!";

	ft_putstr(str);
	printf("\n");
	ft_putstr(str1);
	printf("\n");
	return 0;
} */

/* The main for ft_strlen */
int		main(void)
{
	char str[12] = "Hello";

	printf("Renes function: \n");
	printf("string: [%s] size: [%zu]\n",str ,ft_strlen(str));
	printf("Computers function: \n");
	printf("string: [%s] size: [%zu]\n",str ,ft_strlen(str));
}
