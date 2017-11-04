/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:22:41 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/04 13:25:08 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*strstr(const char *haystack, const char *needle)
{
	int		sublen;

	if (!haystack || !needle)
		return (NULL);
	sublen = ft_strlen(needle);
	while (*haystack)
	{
		if (ft_strnequ(haystack, needle, sublen))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
