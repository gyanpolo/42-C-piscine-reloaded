/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 13:37:07 by gpolo             #+#    #+#             */
/*   Updated: 2024/06/10 19:28:19 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb < 0) || (nb > 12))
		return (0);
	if ((nb == 1) || (nb == 0))
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
