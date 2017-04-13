/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-laro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 18:13:08 by cde-laro          #+#    #+#             */
/*   Updated: 2016/07/21 19:32:54 by cde-laro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_print_param_file(av[1]);
	}
	else if (ac == 1)
		ft_putstr("File name missing.\n", 2);
	else
		ft_putstr("Too many arguments.\n", 2);
	return (0);
}
