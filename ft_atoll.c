#include <libft.h>
# define LL_MAX 9223372036854775807

long long int		ft_atoll(const char *str)
{
	int					neg;
	unsigned long long	sum;

	neg = 1;
	sum = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
		if (*str++ == '-')
			neg = -1;
	while (*str >= '0' && *str <= '9')
	{
		sum *= 10uLL;
		sum += (unsigned long long)(*str - 48);
		if (sum > LL_MAX)
			return (neg < 0 ? 0 : -1);
		++str;
	}
	return (neg * (long long int)sum);
}
