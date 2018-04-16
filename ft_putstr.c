#include "libft.h"
#include <unistd.h>
#include <stdio.h>

void		ft_putstr(char const *s)
{
	while(*s != '\0')
		ft_putchar(s);
	*s++;
}