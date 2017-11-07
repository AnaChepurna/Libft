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
