/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichejra <ichejra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/03 12:05:14 by ichejra           #+#    #+#             */
/*   Updated: 2021/01/03 12:05:51 by ichejra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int 	main(int ac, char **av)
{
	int fd;
	int	l;
	char *line;

	(void)ac;
	fd = open(av[1], O_RDONLY);
	l = 1;
	while (l == 1)
	{
		if (l == 1)
		{
			l = get_next_line(fd, &line);
			printf ("1->|%d|\t%s\n", l, line);
			free(line);
		}
	}
	close(fd);
	return (0);
}
