/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 18:32:48 by gpolo             #+#    #+#             */
/*   Updated: 2024/06/15 10:55:38 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h/bibloteca.h"

void	ft_open(char *str)
{
	int		i;
	char	car;

	i = open(str, O_RDONLY);
	if (i == -1)
	{
		ft_putstr("Cannot read file.");
		ft_putchar('\n');
		return ;
	}
	else
	{
		while (read(i, &car, 1) == 1)
			ft_putchar(car);
	}
	close (i);
}
