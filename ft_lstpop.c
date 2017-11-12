#include <libft.h>

t_list	*ft_lstpop(t_list **alst)
{
	t_list	*current;

	if (!alst || !(*alst))
		return (NULL);
	current = *alst;
	*alst = (*alst)->next;
	current->next = NULL;
	return (current);
}
