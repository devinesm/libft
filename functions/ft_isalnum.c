#include "libft.h"

int	ft_isalnum(int argument)
{
	return (ft_isalpha(argument) || ft_isdigit(argument));
}