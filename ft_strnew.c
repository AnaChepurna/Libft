/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 20:36:05 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/04 14:03:28 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnew(size_t size)
{
	char	*str;
	unsigned int		i;

	str = (char *)malloc(size + 1);
	if (str)
	{
		i = 0;
		while (i <= size)
			str[i++] = '\0';
	}
	return (str);
}
