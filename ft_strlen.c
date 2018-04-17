#include "libft.h"

size_t			ft_strlen(char const *s)
{
	size_t i;

	i = 0;
	while(*s != '\0')
	{
		s++;
		i++;
	}
	return(i);
}