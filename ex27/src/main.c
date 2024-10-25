/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 18:10:14 by gpolo             #+#    #+#             */
/*   Updated: 2024/06/15 10:55:53 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../h/bibloteca.h"

int	main(int argc, char **argv)
{
	if (argc <= 1)
	{
		ft_putstr("File name missing.");
		ft_putchar('\n');
		return (1);
	}
	if (argc == 2)
	{
		ft_open(argv[1]);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		ft_putchar('\n');
		return (1);
	}
}
