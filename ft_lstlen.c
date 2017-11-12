#include <libft.h>

int	ft_lstlen(t_list *begin)
{
	if (!begin)
		return (0);
	return (1 + ft_lstlen(begin->next));
}
