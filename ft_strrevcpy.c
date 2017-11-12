#include <libft.h>

char	*ft_strrevcpy(const char *s)
{
	char *res;
	int 	len;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	res = ft_strnew(len + 1);
	while (*s)
	{
		res[len] = *s;
		len--;
		s++;
	}
	return (res);
}
