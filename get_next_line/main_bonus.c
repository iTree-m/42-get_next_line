/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <ichejra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/23 11:44:27 by ichejra           #+#    #+#             */
/*   Updated: 2020/01/10 13:07:41 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>

int 	main(int ac, char **av)
{
	int fd, fd2;
	int	l, l2;
	char *line, *line2;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	l = 1;
	l2 = 1;
	while (l == 1 || l2 == 1)
	{
		if (l == 1)
		{
			l = get_next_line(fd, &line);
			printf ("1->|%d|\t%s\n", l, line);
			free(line);
		}
		if (l2 == 1)
		{
			l2 = get_next_line(fd2, &line2);
			printf ("2->|%d|\t%s\n", l2, line2);
			free(line2);
		}
	}
	close(fd);
	close(fd2);
	return (0);
}
