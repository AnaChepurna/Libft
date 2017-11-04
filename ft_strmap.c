/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 10:33:41 by achepurn          #+#    #+#             */
/*   Updated: 2017/10/30 12:11:15 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmap(char const *s, const (*f)(char))
{
	char	*res;
	int		i;

	res = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	i = 0;
	while (s[i])
	{
		res[i] = (*f)(s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
