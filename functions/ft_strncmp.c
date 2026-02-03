#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t	index;

	index = 0;
	if (size == 0)
		return (0);
	while (index < size)
	{
		if (s1[index] != s2[index])
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		
		if (s1[index] == '\0')
			return (0);
		index++;
	}
	return (0);
}