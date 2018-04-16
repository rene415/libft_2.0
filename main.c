//ft_putchar main
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

//ft_putstr main
int		main(void)
{
	char str[12] = "Hello";
	char str1[12] = "World!";

	ft_putstr(str);
	ft_putstr(str1);
	return 0;
}