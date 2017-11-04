/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 12:57:23 by achepurn          #+#    #+#             */
/*   Updated: 2017/10/30 13:26:31 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len1;
	int		len2;
	char	*res;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	res = (char *) malloc(sizeof(int) (len1 + len2 + 1));
	if (res)
	{
		ft_strcpy(res, s1);
		ft_strcpy(&res[len1], s2);
	}
	return (res);
}
