#include <stdlib.h>
#include <stdio.h>

static int	a_len(int n, int base)
{
	int	res;

	if (n == 0)
		return (2);
	res = 1;
	while (n != 0)
	{
		res++;
		n /= base;
	}
	return (res);
}

static void	put_a(int n, char *str, int len, int base)
{
	char	*map;

	map = "0123456789abcdefghijklmnopqrstuvwxyz";
	str[len] = '\0';
	len--;
	while (n >= base)
	{
		str[len] = map[n % base];
		n /= base;
		len--;
	}
	str[len] = map[n];
}

char	*ft_itoa_base(int n, int base)
{
	char	*res;
	int	i;
	int	len;

	if (n < 0 || base < 0 || base > 36)
		return ("");
	len = a_len(n, base);
	res = (char*) malloc (sizeof(char) * len);
	put_a(n, res, len - 1, base);
	return (res);
}

int	main(void)
{
printf("%s\n%s\n%s\n", ft_itoa_base('f', 2), ft_itoa_base('o', 2), ft_itoa_base('x', 2));
}
