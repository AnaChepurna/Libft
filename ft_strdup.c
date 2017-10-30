/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 16:38:02 by achepurn          #+#    #+#             */
/*   Updated: 2017/10/26 16:54:26 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	dup = (char *) malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dup)
	{
		i = 0;
		while (src[i])
			dup[i] = src[i++];
		dup[i] = '\0';
	}
	return (dup);
}
