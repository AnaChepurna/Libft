/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:34:01 by achepurn          #+#    #+#             */
/*   Updated: 2017/10/30 21:03:35 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int split_len(const char *str, char c)
{
	int		i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (++i);
}

static int	recursive_count(const char *str, char c)
{
	if (*str == c)
		return (recursive_count(++str, c));
	if (*str)
	{
		while (*str != c && *str)
			str++;
		return (1 + recursive_count(str, c));
	}
	else
		return (0);
}

static void	recursive_split(char **dst, int help, const char *str, char c)
{
	char	*res;
	int		i;

	printf("(%i)%c-", help, *str);
	if (*str == c)
	{
		printf("%i omg!\n", help);
		return (recursive_split(dst, help, ++str, c));
	}
	if (*str)
	{
		res = (char *) malloc(sizeof(char) * split_len(str, c));
		i = 0;
		while (*str && *str != c)
		{
			res[i] = *str;
			i++;
			str++;
		}
		res[i] = '\0';
		*dst = res;
		printf("%i working... %s\n", help, *dst);
		return (recursive_split(++dst, ++help, str, c));		
	}
	else
	{
		*dst = NULL;
		printf("That's all folks\n");
	}
}

char		**ft_strsplit(const char *s, char c)
{
	int		len;
	char	**res;

	len = recursive_count(s, c);
	printf("%i\n", len);
	res = (char **) malloc(sizeof(char *) * (len + 1));
	recursive_split(res, 0, s, c);
	return (res);
}

int		main(int argc, char **argv)
{
	char  **res = ft_strsplit("cfcfcfcfcfcfcfccfjcf", 'j');
	while (*res)
	{
		printf("!%s %i\n", *res, split_len(*res, '\0'));
		res++;
	}
}
