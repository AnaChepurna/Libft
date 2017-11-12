#include <libft.h>

t_list	*ft_strsplitlst(const char *str, char c)
{
	return (ft_arrtolst(ft_strsplit(str, c)));
}
