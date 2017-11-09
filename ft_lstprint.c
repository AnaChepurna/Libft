/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:57:18 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/08 17:47:21 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstprint(t_list *lst)
{
	ft_putendl("-------");
	ft_putstr("content: ");
	ft_putendl((char *)lst->content);
	ft_putstr("content_size: ");
	ft_putnbr(lst->content_size);
	ft_putchar('\n');
	if (lst->next)
		ft_putendl("next: present");
	else
		ft_putendl("next: no");
	ft_putendl("-------");
}
