#include "get_next_line.h"

char	*remove_line_from_buff(char *content_buff)
{
	int		src_i;
	int		dst_i;
	char	*extra_str;

	src_i = 0;
	while (content_buff[src_i] && content_buff[src_i] != '\n')
		src_i++;
	extra_str = malloc(sizeof(char) * (ft_strlen(content_buff) - src_i + 1));
	if (!extra_str)
		return (NULL);
	src_i++;
	dst_i = 0;
	while (content_buff[src_i])
		extra_str[dst_i++] = content_buff[src_i++];
	extra_str[dst_i] = 0;
	return (extra_str);
}

char	*read_line(char *content_buff)
{
	int		i;
	char	*line;

	i = 0;
	while (content_buff[i] && content_buff[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (content_buff[i])
	{
		line[i] = content_buff[i];
		if (content_buff[i] == '\n')
			break ;
		i++;
	}
	line[i] = 0;
	return (line);
}

char	*read_file(int fd, char *content_buff)
{
	char	*read_buff;
	int		read_size;

	read_buff = malloc(sizeof(char) * (BUFSIZ + 1));
	
	read_size = 1;
	while (read_size > 0)
	{
		read_size = read(fd, read_buff, BUFSIZ);
		if (read_size == -1)
		{
			free(read_buff);
			return (NULL);
		}
		read_buff[read_size] = 0;
		content_buff = ft_strjoin(content_buff, read_buff);
		if (ft_strchr(read_buff, '\n'))
			break ;
	}
	free(read_buff);
	return (content_buff);
}

char    *get_next_line(int fd)
{
	static char *content_buff;
	char        *current_line;
	
	if (fd < 0 || BUFSIZ <= 0)
		return (NULL);
	if (!content_buff)
		content_buff = malloc(sizeof(char));
	content_buff = read_file(fd, content_buff);
	if (!content_buff)
		return (NULL);
	current_line = read_line(content_buff);
	content_buff = remove_line_from_buff(content_buff);
	if (!current_line)
	{
		free(content_buff);
		free(current_line);
		return (NULL);
	}
	return (current_line);
}