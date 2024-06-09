/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:20:51 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/09 19:24:43 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	counter;
	char	*str;	

	counter = 0;
	str = (char *)s;
	while (counter < n)
	{
		if ((unsigned char)str[counter] == (unsigned char)c)
			return ((char *)s + counter);
		counter++;
	}
	return (NULL);
}
