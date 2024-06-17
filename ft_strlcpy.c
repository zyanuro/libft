/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ancuesta <ancuesta@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:27:35 by ancuesta          #+#    #+#             */
/*   Updated: 2024/06/13 20:58:55 by ancuesta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	counter;

	src_len = 0;
	counter = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[src_len] != '\0')
		src_len++;
	while (counter < dstsize - 1 && src[counter] != '\0')
	{
		dst[counter] = src[counter];
		counter++;
	}
	if (dstsize > 0)
		dst[counter] = '\0';
	return (src_len);
}
