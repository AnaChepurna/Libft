/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 12:59:33 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/04 17:08:14 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *memptr, int val, size_t num)
{
	int		i;
	char	*buf;

	if (!memptr)
		return (NULL);
	i = 0;
	buf = memptr;
	while (i < (int)num)
	{
		buf[i] = val;
		i++;
	}
	return (memptr);
}
