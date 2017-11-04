/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:29:58 by achepurn          #+#    #+#             */
/*   Updated: 2017/10/30 12:46:40 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		i;

	res = (char *) malloc(sizeof(char) + (len + 1))
	if (res)
	{
		i = 0;
		while (i < len)
		{
			res[i] = s[start + i];
			i++;
		}
		res[i] = '\0';
	}
	return (res);
}
