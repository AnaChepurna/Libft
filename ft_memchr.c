/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 13:12:17 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/04 13:13:28 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	const char	*ptr;

	ptr = s;
	i = 0;
	if (!s)
	{
		while (i < n)
		{
			if (ptr[i] == c)
				return ((void *)&ptr[i]);
			i++;
		}
	}
	return (NULL);
}
