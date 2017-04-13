/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_param_file.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-laro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 12:35:21 by cde-laro          #+#    #+#             */
/*   Updated: 2016/11/21 12:47:29 by cde-laro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_print_param_file(char *filename)
{
	int		fd;
	int		ret;
	char	buf[42];

	ret = 1;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return ;
	while ((ret = read(fd, buf, 41)))
	{
		buf[ret] = '\0';
		ft_putstr(buf, 1);
	}
	close(fd);
}
