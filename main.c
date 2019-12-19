/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-ayac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:17:49 by hel-ayac          #+#    #+#             */
/*   Updated: 2019/12/19 21:22:38 by hel-ayac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../get_next_line/get_next_line.h"
#include <cfntl.h>

int main(int argc, char **argv)
{
	int		fd;
	char	*buffer;
	int 	ret;
	fd = 0;
	fd = open(argv[1], fd);
	if (argc < 1)
		return (1);
	while ((ret = get_next_line(fd, &buffer)) >= 0)
	{
		if (ret == 1)
			printf("%s\n",buffer);
		else if (ret == 0)
		{
			printf("%s",buffer);
			break;
		}
	}
	return (0);
}

