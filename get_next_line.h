#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char    *ft_strchr(char *str, char c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);

#endif