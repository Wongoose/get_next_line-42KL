#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	total_size;
	int		i;

	total_size = ft_strlen(s1) + ft_strlen(s2);
	new_str = malloc(sizeof(char) * (total_size + 1));
	while (*s1)
	{
		new_str[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		new_str[i++] = *s2;
		s2++;
	}
	new_str[i] = 0;
	return (new_str);
}

char    *ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}