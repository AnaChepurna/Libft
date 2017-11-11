/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:25:45 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/11 20:21:52 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define BUFF_SIZE 320

static int	ft_strclen(char *str, char c)
{
	int			i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int			get_next_line(const int fd, char **line)
{
	static char	*content;
	char		buf[BUFF_SIZE + 1];
	int			lnlen;
	int			ret;

	if (!content)
		content = ft_strnew(1);
	while (!ft_strchr(content, '\n') && (ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		content = ft_strjoin(content, buf);
	}
	if (!ret && !ft_strlen(content))
		return (0);
	lnlen = ft_strclen(content, '\n') + 1;
	*line = ft_strnew(lnlen);
	ft_strncpy(*line, content, lnlen - 1);
	content = content + lnlen;
	return (1);
}
