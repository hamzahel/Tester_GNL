/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:17:49 by hel-ayac          #+#    #+#             */
/*   Updated: 2019/12/12 13:07:46 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../get_next_line/get_next_line.h"

int main(int argc, char **argv)
{
	int		fd;
	char	*buffer;

	fd = 0;
	fd = open(argv[1], fd);
	if (argc < 1)
		return (1);
	while (get_next_line(fd, &buffer) > 0)
	{
		printf("%s\n",buffer);
		free(buffer);
		buffer = NULL;
	}
	free(buffer);
	return (0);
}

