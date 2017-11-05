/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 16:34:01 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/04 15:06:25 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	split_len(const char *str, char c)
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

static void	recursive_split(char **dst, const char *str, char c)
{
	char	*res;
	int		i;

	if (*str == c)
		return (recursive_split(dst, ++str, c));
	if (*str)
	{
		res = (char *)malloc(sizeof(char) * split_len(str, c));
		i = 0;
		while (*str && *str != c)
		{
			res[i] = *str;
			i++;
			str++;
		}
		res[i] = '\0';
		*dst = res;
		return (recursive_split(++dst, str, c));
	}
	else
		*dst = NULL;
}

char		**ft_strsplit(const char *s, char c)
{
	int		len;
	char	**res;

	if (!s)
		return (NULL);
	len = recursive_count(s, c);
	res = (char **)malloc(sizeof(char *) * (len + 1));
	if (res)
		recursive_split(res, s, c);
	return (res);
}
