#include <libft.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	
	if (!lst || !f)
		return (NULL);
	new = (*f)(lst);
	if (lst->next)
		new->next = ft_lstmap(lst->next, f);
	else
		new->next = NULL;
	return (new);
}
