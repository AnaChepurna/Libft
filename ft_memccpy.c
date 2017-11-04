/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:07:36 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/04 13:12:04 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	int	i;

	if (!dest || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] == c)
			return (&dest[i]);
		i++;
	}
	return (NULL);
}
