#include <libft.h>

char	*ft_strrev(char *s)
{
	char *buf;

	buf = ft_strrevcpy(s);
	ft_strcpy(s, buf);
	free(buf);
	return (s);
}
