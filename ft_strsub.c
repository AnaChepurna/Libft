/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:29:58 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/18 21:57:35 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	res = ft_strnew(len);
	if (res)
	{
		i = 0;
		while (i < (int)len)
		{
			res[i] = s[start + i];
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}
