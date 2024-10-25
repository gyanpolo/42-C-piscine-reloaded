/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:23:11 by gpolo             #+#    #+#             */
/*   Updated: 2024/06/14 17:58:02 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	c;
	int	c2;

	c = 0;
	c2 = 0;
	while (tab[c])
	{
		if (f(tab[c]) == 1)
			c2++;
		c++;
	}
	return (c2);
}
/*
int ft_random(char *tab)
{
	if (strlen(tab) > 4)
		return (0);
	return (1);
}

int main (int argc, char **argv)
{
	if (argc > 1)
		printf("%i\n", ft_count_if(argv, &ft_random));
	return (0);
}*/
