/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:28:34 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/09 19:35:27 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;

	if (!dst && !src)
		return (0);
	counter = 0;
	if (src < dst)
	{
		counter = len;
		while (counter > 0)
		{
			counter--;
			((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
		}
	}
	else
	{
		counter = 0;
		while (counter < len)
		{
			((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
			counter++;
		}
	}
	return (dst);
}
