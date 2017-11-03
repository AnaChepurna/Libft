#include <libft.h>

void	*memset(void *memptr, int val, size_t num)
{
	int	i;

	i = 0;
	while (i < num)
	{
		memptr[i] = val;
		i++;
	}
	return (memptr);
}
