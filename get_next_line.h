/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:51:30 by zwong             #+#    #+#             */
/*   Updated: 2022/08/24 20:51:30 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2000
# endif

char	*get_next_line(int fd);
char	*ft_strchr(char *str, char c);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char *str);
void	*ft_calloc(size_t size, size_t len);

#endif