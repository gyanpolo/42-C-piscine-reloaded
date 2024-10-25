/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:31:49 by gpolo             #+#    #+#             */
/*   Updated: 2024/06/10 18:32:14 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*nums;
	int	c;

	c = 0;
	size = (max - min);
	if (min >= max)
		return (0);
	nums = (int *)malloc ((size + 1) * sizeof(int));
	while (size > 0)
	{
		nums[c++] = min++;
		size--;
	}
	nums[c] = '\0';
	return (nums);
}
