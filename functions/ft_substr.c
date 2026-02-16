#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;
	size_t	index;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	
	if (start >= s_len)
		return (ft_strdup(""));

    if (len > s_len - start)
		len = s_len - start;

    substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	
	index = 0;
	while (index < len)
	{
		substr[index] = s[start + index];
		index++;
	}
	substr[index] = '\0';
	return (substr);
}