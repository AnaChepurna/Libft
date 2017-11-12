#include <libft.h>

t_list	*ft_lstget(t_list *lst, int index)
{
	if (!lst || index < 0)
		return (NULL);
	if (index > 0)
		return (ft_lstget(lst->next, --index));
	return (lst);
}
