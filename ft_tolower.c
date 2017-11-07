/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 12:08:34 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/04 16:21:45 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_tolower(int c)
{
	if (c <= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}