/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 16:23:51 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/04 16:24:00 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putchar_fd(char chr, int fd)
{
	int	c;

	c = (int)chr;
	if (ft_isascii(c))
		write(fd, &c, 1);
	if (c >= 0x10000 && c <= 0x10FFFF)
	{
		ft_putchar_fd(fd, (char)(c >> 18 | 0xF0));
		ft_putchar_fd(fd, (char)((c >> 12 & 0x3F) | 0x80));
	}
	if (c >= 0x800 && c < 0x10000)
		ft_putchar_fd(fd, (char)(c >> 12 | 0xE0));
	if (c >= 0x800 && c <= 0x10FFFF)
		ft_putchar_fd(fd, (char)((c >> 6 & 0x3F) | 0x80));
	if (c >= 0x80 && c < 0x800)
		ft_putchar_fd(fd, (char)(c >> 6 | 0xC0));
	if (c >= 0x80 && c <= 0x10FFFF)
		ft_putchar_fd(fd, (char)((c & 0x3F) | 0x80));
}
