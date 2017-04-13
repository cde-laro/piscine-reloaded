/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-laro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:48:33 by cde-laro          #+#    #+#             */
/*   Updated: 2016/11/04 11:48:41 by cde-laro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void		ft_aff(int argc, char **argv)
{
	int		a;

	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
		a++;
	}
}

int			main(int argc, char **argv)
{
	int		a;
	int		i;
	char	*d;

	i = 1;
	while (i == 1)
	{
		a = 1;
		i = 0;
		while (a < argc - 1)
		{
			if (ft_strcmp(argv[a], argv[a + 1]) > 0)
			{
				d = argv[a];
				argv[a] = argv[a + 1];
				argv[a + 1] = d;
				i = 1;
			}
			a++;
		}
	}
	ft_aff(argc, argv);
}
