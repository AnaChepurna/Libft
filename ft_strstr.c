/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:22:41 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/11 17:14:23 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		sublen;

	sublen = ft_strlen(needle);
	if (!sublen)
		return ((char *)haystack);
	while (*haystack)
	{
		if (ft_strnequ(haystack, needle, sublen))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
