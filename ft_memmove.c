#include <libft.h>

void	*memmove(void *dest, const void *src, size_t n)
{
	void	*buf;
	int		i;

	buf = malloc(sizeof(void) * n);
	if (buf)
	{
		i = 0;
		while (i < n)
		{
			buf[i] = src[i];
			i++;
		}
		i = 0;
		while (i < n)
		{
			dst[i] = buf[i];
			i++;
		}
		free(buf);
	}
	return (dest);
}
