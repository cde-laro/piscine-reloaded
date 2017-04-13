/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-laro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 07:59:28 by cde-laro          #+#    #+#             */
/*   Updated: 2016/11/04 11:09:06 by cde-laro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*dest;
	int		i;

	i = 0;
	if (min >= max)
		dest = NULL;
	else
	{
		dest = malloc(sizeof(int) * (max - min));
		if (dest == NULL)
			return (dest);
		while (min < max)
		{
			dest[i] = min;
			min++;
			i++;
		}
	}
	return (dest);
}
