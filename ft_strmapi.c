/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 11:33:28 by achepurn          #+#    #+#             */
/*   Updated: 2017/10/30 12:10:56 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char cons *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;

	res = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	while(s[i])
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	return (res);
}
