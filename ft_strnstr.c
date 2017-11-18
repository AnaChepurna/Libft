/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 11:37:18 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/18 21:54:32 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		sublen;
	int		i;

	i = 0;
	sublen = ft_strlen(needle);
	if (!sublen)
		return ((char *)haystack);
	while (haystack[i] && i <= (int)len - sublen)
	{
		if (ft_strnequ(&haystack[i], needle, sublen))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
