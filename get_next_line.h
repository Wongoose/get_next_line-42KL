#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
// # include <unistd.h>
# include <sys/types.h>
# include <stdio.h>
# include <io.h>

char	*get_next_line(int fd);
char    *ft_strchr(char *str, char c);
char	*ft_strjoin(char *s1, char *s2);

#endif