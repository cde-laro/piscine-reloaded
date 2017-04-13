/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-laro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 14:39:17 by cde-laro          #+#    #+#             */
/*   Updated: 2016/11/03 10:42:02 by cde-laro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		n;
	int		dest;

	n = 1;
	dest = 1;
	if (nb >= 13 || nb < 0)
		return (0);
	while (n <= nb)
	{
		dest = dest * n;
		n++;
	}
	return (dest);
}
