/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrtolst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:27:52 by achepurn          #+#    #+#             */
/*   Updated: 2017/11/08 13:27:58 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_arrtolst(void **arr)
{
	t_list	*current;

	if (*arr)
	{
		current = ft_lstnew(*arr, sizeof(*arr));
		current->next = ft_arrtolst(++arr);
		return (current);
	}
	return (NULL);
}
