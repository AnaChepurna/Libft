#include <libft.h>

char	*strstr(const char *haystack, const char *needle)
{
	int	sublen;

	sublen = ft_strlen(needle);
	while (*haystack)
	{
		if (ft_strnequ(haystack, needle, sublen))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
