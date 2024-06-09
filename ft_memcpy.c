/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:38:50 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/09 19:35:22 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*uchardst;
	const unsigned char	*ucharsrc;
	size_t				i;

	if (!dst && !src)
		return (0);
	i = 0;
	uchardst = (unsigned char *) dst;
	ucharsrc = (const unsigned char *) src;
	while (i < n)
	{
		uchardst[i] = ucharsrc[i];
		i++;
	}
	return (dst);
}
