/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpolo <gpolo@student.42barcelona.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:02:25 by gpolo             #+#    #+#             */
/*   Updated: 2024/06/10 17:37:41 by gpolo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		c;
	char	*dest;

	c = 0;
	while (src[c] != '\0')
		c++;
	dest = (char *)malloc (c + 1);
	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
/*
int main(void)
{	
	char *src;

	src = "hola";
	char *dest;
	
	dest = ft_strdup(src);
 	printf("%s \n %s", dest,src);
	return (0);
	free(dest);
}*/
