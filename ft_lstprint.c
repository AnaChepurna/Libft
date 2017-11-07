#include <libft.h>

void	ft_lstprint(t_list *lst)
{
	ft_putstr("content: ");
	ft_putendl((char *)lst->content);
	ft_putstr("content_size: ");
	ft_putnbr(lst->content_size);
	ft_putchar('\n');
	if (lst->next)
		ft_putendl("next: present");
	else
		ft_putendl("next: no");
}
