#include <libft.h>

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (lst && f)
	{
		(*f)(lst);
		if (lst->next)
			ft_lstiter(les->next, f);
	}
}
