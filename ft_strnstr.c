/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 11:37:18 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/04 13:49:55 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*strnstr(const char *haystack, const char *needle, size_t len)
{
	int		sublen;
	int		i;

	if (!hayshack || !needle)
		return (NULL);
	i = 0;
	sublen = ft_strlen(needle);
	while (haystack[i] && i < len - sublen)
	{
		if (ft_strnequ(&haystack[i], needle, sublen))
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
