/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 13:31:13 by achepurn          #+#    #+#             */
/*   Updated: 2017/10/30 14:51:58 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s)
{
	int		start;
	int		finish;
	char	*res;

	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	finish = ft_strlen(s) - 1;
	while (s[finish] == ' ' || s[finish] == '\n' || s[finish] == '\t')
		finish--;
	res = (char *) malloc(sizeof(char) * (finish - start + 2));
	if (res)
		ft_strncpy(res, &s[start], finish - start + 1);
	return (res);
}
