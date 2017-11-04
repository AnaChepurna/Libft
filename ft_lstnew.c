#include <libft.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;
	
	res = (t_list*)malloc(sizeof(t_list));
	if (res)
	{
		if (!content)
		{
			res->content = NULL;
			res->content_size = 0;
			res->next = NULL;
		}
		else
		{
			res->content = malloc(content_size);
			if (res->content)
			{
				ft_memcpy(res->content, content, content_size);
				res->content_size = content_size;
				res->next = NULL;
			}
		}
		return (res);
	}
	return (NULL);
}
