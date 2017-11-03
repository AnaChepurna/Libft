#include <libft.h>

size_t	ft_strlcat(char *dest, const char *src, size_t l)
{
	int	i;
	int	j;
	int	dest_len;

	dest_len = ft_strlen(src);
	i = dest_len;
	j = 0;
	while (src[j] && i < l - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return ((size_t) (dest_len + ft_strlen(src)));
}
