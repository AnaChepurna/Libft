/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:03:25 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/04 13:06:04 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	void	*buf;
	int		i;

	if (!dest || !src)
		return (NULL);
	buf = malloc(sizeof(void) * n);
	if (buf)
	{
		i = 0;
		while (i < n)
		{
			buf[i] = src[i];
			i++;
		}
		i = 0;
		while (i < n)
		{
			dst[i] = buf[i];
			i++;
		}
		free(buf);
	}
	return (dest);
}
