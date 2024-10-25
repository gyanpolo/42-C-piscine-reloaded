/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 14:11:41 by gpolo             #+#    #+#             */
/*   Updated: 2024/06/10 18:27:43 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	c;
	int	r;

	r = 0;
	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0' && s2[c] != '\0')
		c++;
	return (s1[c] - s2[c]);
}