#include <libft.h>

t_list	*ft_lstrm(t_list *alst, int index)
{
	t_list	*current;
	t_list	*last;

	if (!alst || index < 0)
		return (NULL);
	if (!index)
		return (ft_lstpop(&alst));
	last = ft_lstget(alst, index - 1);
	current = last->next;
	last->next = current->next;
	current->next = NULL;
	return (current);
}
