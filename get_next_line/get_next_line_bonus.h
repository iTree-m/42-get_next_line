/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <ichejra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/16 13:32:08 by ichejra           #+#    #+#             */
/*   Updated: 2019/12/23 23:43:52 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# define FD 10240

typedef struct	s_struct
{
	int			flag;
	int			index;
	int			res;
	char		*s1;
	char		*s2;
}				t_struct;

int				get_next_line(int fd, char **line);
size_t			ft_strlen(const char *s);
void			*ft_memmove(void *dst, const void *src, size_t len);
char			*ft_fstrjoin(char *s1, char const *s2);
char			*ft_fstrjoin_c(char *s1, char const *s2, int c);
char			*ft_strchr(const char *s, int c);

#endif
