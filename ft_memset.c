/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 12:59:33 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/11 17:03:29 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *memptr, int val, size_t num)
{
	int				i;
	unsigned char	*buf;

	i = 0;
	buf = memptr;
	while (i < (int)num)
	{
		buf[i] = (unsigned char)val;
		i++;
	}
	return (memptr);
}
