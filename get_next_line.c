#include "get_next_line.h"

char    *read_file(int fd, char *content_buff)
{
    char    *read_buff;
    int     read_size;

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
    // NEXT: current_line

}