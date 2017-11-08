/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 12:50:08 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/08 13:49:04 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	a_len(int n)
{
	int	res;

	if (n == 0)
		return (2);
	res = 1;
	if (n < 0)
		res++;
	while (n != 0)
	{
		res++;
		n /= 10;
	}
	return (res);
}

static void	put_a(int n, char *str, int len)
{
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	str[len] = '\0';
	len--;
	while (n >= 10)
	{
		str[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	str[len] = n + '0';
}

static char	*min_int_helper(void)
{
	char	*min_int;
	char	*res;

	min_int = "-2147483648";
	res = ft_strdup(min_int);
	return (res);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == -2147483648)
		return (min_int_helper());
	len = a_len(n);
	res = (char*)malloc(sizeof(char) * len);
	if (res)
		put_a(n, res, len - 1);
	return (res);
}
