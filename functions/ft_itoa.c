#include "libft.h"

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n /= 10;
		len += 2;
	}
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		index;
	long	nl;
	char	*nbr;

	nl = n;
	index = 0;
	len = get_len(n);
	nbr = malloc(len + 1);
	if (!nbr)
		return (NULL);
	nbr[len] = '\0';
	if (nl < 0)
	{
		nl *= -1;
		nbr[index] = '-';
		index++;
	}
	while (index < len)
	{
		nbr[--len] = (nl % 10) + '0';
		nl /= 10;
	}
	return (nbr);
}