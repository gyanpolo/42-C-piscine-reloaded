/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 12:14:33 by gpolo             #+#    #+#             */
/*   Updated: 2024/06/10 17:17:26 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c <= '9')
		ft_putchar(c++);
}
/*
int main(void)
{
	ft_print_numbers();
	return (0);
}
*/
