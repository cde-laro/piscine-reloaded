/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-laro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 11:20:40 by cde-laro          #+#    #+#             */
/*   Updated: 2016/07/21 18:14:34 by cde-laro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putstr(char *str, int output)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(output, &str[i], 1);
		i++;
	}
}
